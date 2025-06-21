/*Given an integer array nums and an integer k, return the kth largest element in the array.

Note that it is the kth largest element in the sorted order, not the kth distinct element.

Can you solve it without sorting?*/
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end(),greater<int>());
        int p=0;
        for(int i=0;i<k;i++){
            p++;
        }
        return nums[--p];
    }
};