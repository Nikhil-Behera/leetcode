/*You are given an integer array nums.

You replace each element in nums with the sum of its digits.

Return the minimum element in nums after all replacements.*/
// #include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    int minElement(vector<int>& nums) {
        int size = nums.size();
        int min_val = INT_MAX;
        
        for(int index=0 ; index<size ; index++){
            int sum = 0 ;
            int temp = nums[index];

            while(temp > 0){
                int digit = temp % 10;
                sum += digit;
                temp /= 10;
            }
            min_val = min(min_val,sum);
        }
        return min_val;
    }
};