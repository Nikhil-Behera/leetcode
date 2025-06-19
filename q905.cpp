/*Given an integer array nums, move all the even integers at the beginning of the array followed by all the odd integers.

Return any array that satisfies this condition.

 */
#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        if(nums.size() == 1) return nums;
        int n= nums.size();
        vector<int> even;
        vector<int> odd;
        for(int i=0;i<n;i++){
            if(nums[i]%2==0){
                even.push_back(nums[i]);
            }
            else{
                odd.push_back(nums[i]);
            }
        }

        vector<int> ans;
        for(int i=0;i<even.size();i++){
            ans.push_back(even[i]);
        }
        for(int i=0;i<odd.size();i++){
            ans.push_back(odd[i]);
        }
        return ans;
    }
};