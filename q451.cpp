/*Given a string s, sort it in decreasing order based on the frequency of the characters. The frequency of a character is the number of times it appears in the string.

Return the sorted string. If there are multiple answers, return any of them.*/
#include<iostream>
#include<queue>
#include<unordered_map>
#include<string>
using namespace std;
class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> mp;
        for(auto it : s){
            mp[it]++;
        }
        priority_queue<pair<int,char>> pq;
        for(auto it:mp){
            pq.push({it.second,it.first});
        }
        string ans;
        while(!pq.empty()){
            auto it = pq.top();
            for(int i=0;i<it.first;i++){
                ans += it.second;
            }
            pq.pop();
        }
        return ans;
    }
};