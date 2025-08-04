/*You are given an array of strings names, and an array heights that consists of distinct positive integers. Both arrays are of length n.

For each index i, names[i] and heights[i] denote the name and height of the ith person.

Return names sorted in descending order by the people's heights.*/
#include<iostream>
#include<queue>
#include<algorithm>
using namespace std;
class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        int n = names.size();
        vector<pair<string,int>> p;
        for(int i=0;i<n;i++){
            p.push_back({names[i],heights[i]});
        }   
        priority_queue<pair<int,string>> pq;
        for(auto it : p){
            pq.push({it.second,it.first});
        }   
        vector<string> ans;
        while(!pq.empty()){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
    }
};