/*Given an integer array nums, return the most frequent even element.

If there is a tie, return the smallest one. If there is no such element, return -1.*/
#include<iostream>
#include<vector>
#include<queue>
#include<unordered_map>
using namespace std;
class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(auto iy : nums){
            if(iy % 2==0){
                mp[iy]++;
            }
        }
        priority_queue<pair<int,int>> pq;
        for(auto it : mp){
            pq.push({it.second,-it.first});
        }

        if(pq.size() == 0) return -1;
        
        return -pq.top().second;
    }
};