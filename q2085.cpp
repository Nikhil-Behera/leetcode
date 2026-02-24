/*Given two string arrays words1 and words2, return the number of strings that appear exactly once in each of the two arrays.*/
#include<iostream>
#include<unordered_map>
using namespace std;
class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        unordered_map<string,int> mp1;
        unordered_map<string,int> mp2;
        
        for(auto it : words1){
            mp1[it]++;
        }
        for(auto it : words2){
            mp2[it]++;
        }
        int ans=0;
        for(auto it : mp1){
            if(it.second == 1 && mp2[it.first] == 1){
                ans++;
            }
        }
        return ans;
    }
};