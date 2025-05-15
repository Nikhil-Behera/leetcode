/*Given an integer array of size n, find all elements that appear more than ⌊ n/3 ⌋ times.*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        if(nums.size()==1) return nums;
        int n=nums.size();
        int count =0;

        // int max=0;
        // for(int i=0;i<n;i++){
        //     if(nums[i]>nums[max]){
        //         max=i;
        //     }
        // }
        // vector<int> arr={max,0};
        int maxVal = *max_element(nums.begin(), nums.end());
        vector<int> arr(maxVal + 1, 0);

        for(int i=0;i<n;i++){
            arr[nums[i]] = arr[nums[i]] +1;
        }

        vector<int> res;
        for(int i=1;i<=n;i++){
            if(arr[i] > n/3){
                res.push_back(i);
            }
        }

        return res;
    }
};