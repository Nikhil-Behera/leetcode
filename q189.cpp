/*Given an integer array nums, rotate the array to the right by k steps, where k is non-negative.*/
#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n= nums.size();
        k=k%n;

        vector<int> temp;
        for(int i=n-k;i<n;i++){
            temp.push_back(nums[i]);
        }

        int p = n - k - 1;
        for (int i = n - 1; i >= k; i--) {
            nums[i] = nums[p];
            p--;
        }

        int j=0;
        for(int i=0;i<k;i++){
            nums[i] = temp[j];
            j++;
        }
    }
};