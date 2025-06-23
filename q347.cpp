#include<iostream>
#include<queue>
#include<unordered_map>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        if(nums.size()==1) return nums;
        
        int n =  nums.size();
        
        unordered_map<int,int> mp;
       for(auto it:nums){
        mp[it]++;
       }
        priority_queue<pair<int,int>> pq; //max heap to store max freq
        for(auto it : mp){
            pq.push({it.second,it.first});
        }
        vector<int> ans;
        for(int i=0;i<k;i++){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
    }
};