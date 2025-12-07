/*Given the array nums, for each nums[i] find out how many numbers in the array are smaller than it. That is, for each nums[i] you have to count the number of valid j's such that j != i and nums[j] < nums[i].

Return the answer in an array.*/
#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
using namespace std;
class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        vector<int> ans;

        for(int i=0;i<n;i++){
            count = 0;

            for(int j=0;j<n;j++){
                if(nums[i] > nums[j]){
                    count++;
                }
            }
            ans.push_back(count);
        }
        return ans;
    }
};