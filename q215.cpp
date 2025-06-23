/*Given an integer array nums and an integer k, return the kth largest element in the array.

Note that it is the kth largest element in the sorted order, not the kth distinct element.

Can you solve it without sorting?*/
#include<iostream>
#include<algorithm>
#include<queue>
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

        priority_queue<int> pq;
        for(int i=0;i<nums.size();i++){
            pq.push(nums[i]);
        }

       for(int i=1;i<k;i++){
        pq.pop();
       }
       return pq.top();
    }
};