/*
 * �ļ���main.cpp 
 * ���ߣ�yzying
 * ������������� 
 */
 #include <iostream>
 #include <vector>
 #include "csp-j/LIS.h"
 using namespace std;
 
  
 int main(){
 	vector<int> nums;
 	nums.push_back(10);
 	nums.push_back(9);
 	nums.push_back(11);
 	nums.push_back(18);
 	nums.push_back(30);
 	
 	cout << maxLengthOfLIS(nums) << endl;
 	return 0;
 }
 
