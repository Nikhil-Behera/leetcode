/*You are given two integer arrays nums1 and nums2 sorted in non-decreasing order and an integer k.

Define a pair (u, v) which consists of one element from the first array and one element from the second array.

Return the k pairs (u1, v1), (u2, v2), ..., (uk, vk) with the smallest sums.*/
#include<iostream>
#include<vector>
#include<queue>
using namespace std;
class Solution {
public:
    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        vector<vector<int>> ans;

        int m = nums1.size();
        int n = nums2.size();

        if(m == 0 || n == 0 || k == 0){
            return ans;
        }

        priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>>> pq;

        for(int i=0;i<min(m,k);i++){
            pq.push({nums1[i]+nums2[0],{i,0}});
        }

        while(!pq.empty() && k>0){
            auto top = pq.top();
            pq.pop();
            int i = top.second.first;
            int j = top.second.second;

            ans.push_back({nums1[i],nums2[j]});

            k--;

            if(j+1 < n){
                pq.push({nums1[i] + nums2[j+1],{i,j+1}});
            }
        }
        return ans;
    }
};