#include <algorithm>
#include <vector>
#include "LIS.h" 
using namespace std;

int maxLengthOfLIS(vector<int> nums){
	int numLength = nums.size();
	if (numLength == 0) return 0;
	
	// 初始：每个数据都计只有 最长递增子序列 为 1 
	vector<int> dp(numLength,1);
	//  
	for (int i = 1; i < numLength; i++) {
		for(int j = 1; j < i; j++) {
			// 和前面(j)的进行对比， 如果发现前面有比自己小的，那么此处(i)应该比前面那个(j)的最长子序列多1
			if ( nums[j] < nums[i]) {
				dp[i] = max(dp[i], dp[j] + 1);
			} 
		}
	}
	
	// 找出dp中记录的，最长递增子序列的数字 
	int maxLength = 1;
	
	for (int i; i < numLength; i++){
		maxLength = max(maxLength, dp[i]);
	}
	
	return maxLength;
} 
