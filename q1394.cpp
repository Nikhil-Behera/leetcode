/*Given an array of integers arr, a lucky integer is an integer that has a frequency in the array equal to its value.

Return the largest lucky integer in the array. If there is no lucky integer return -1.*/
#include<iostream>
#include<vector>
#include<unordered_map>
#include<queue>
using namespace std;
class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int,int> mp;
        for(auto it : arr){
            mp[it]++;
        }
        priority_queue<pair<int,int>> pq;
        for(auto it : mp){
            pq.push({it.second,it.first});
        }

        while(!pq.empty()){
            auto it = pq.top();
            pq.pop();
            if(it.first==it.second){
                return it.first;
            }
        }
        return -1;
    }
};