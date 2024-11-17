#include <algorithm>
#include <vector>
#include "LIS.h" 
using namespace std;

int maxLengthOfLIS(vector<int> nums){
	int numLength = nums.size();
	if (numLength == 0) return 0;
	
	// ��ʼ��ÿ�����ݶ���ֻ�� ����������� Ϊ 1 
	vector<int> dp(numLength,1);
	//  
	for (int i = 1; i < numLength; i++) {
		for(int j = 1; j < i; j++) {
			// ��ǰ��(j)�Ľ��жԱȣ� �������ǰ���б��Լ�С�ģ���ô�˴�(i)Ӧ�ñ�ǰ���Ǹ�(j)��������ж�1
			if ( nums[j] < nums[i]) {
				dp[i] = max(dp[i], dp[j] + 1);
			} 
		}
	}
	
	// �ҳ�dp�м�¼�ģ�����������е����� 
	int maxLength = 1;
	
	for (int i; i < numLength; i++){
		maxLength = max(maxLength, dp[i]);
	}
	
	return maxLength;
} 
