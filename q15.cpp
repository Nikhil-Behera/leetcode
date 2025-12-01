/*Given an integer array nums, return all the triplets [nums[i], nums[j], nums[k]] such that i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == 0.

Notice that the solution set must not contain duplicate triplets.
*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        int n = nums.size();
        sort(nums.begin(),nums.end());

        for(int i=0;i<n-2;i++){
            if(i>0 && nums[i] == nums[i-1]) continue;

            int target = 0 - nums[i];
            int left = i+1;
            int right = n-1;

            while(left < right){

                int sum = nums[left] + nums[right];

                if(sum == target){
                    vector<int> row = {nums[i],nums[left],nums[right]};
                    ans.push_back(row);

                    while(left < right && nums[left] == nums[left+1]){
                        left++;
                    }
                    while(left < right && nums[right] == nums[right-1]){
                        right--;
                    }
                    left++;
                    right--;
                }
                else if(sum > target){
                    right--;
                }
                else{
                    left++;
                }
            }

        }
        
        return ans;
    }
};