/*A sentence is a string of single-space separated words where each word consists only of lowercase letters.

A word is uncommon if it appears exactly once in one of the sentences, and does not appear in the other sentence.

Given two sentences s1 and s2, return a list of all the uncommon words. You may return the answer in any order.*/
#include<iostream>
#include<unordered_map>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        unordered_map<string,int> mp;
        vector<string> ans;
        string word;
        
        stringstream ss1(s1);
        while(ss1 >> word){
            mp[word]++;
        }

        stringstream ss2(s2);
        while(ss2 >> word){
            mp[word]++;
        }

        for(auto it : mp){
            if(it.second == 1){
                ans.push_back(it.first);
            }
        }
        // for(auto it : mp2){
        //     if(it.second == 1){
        //         ans.push_back(it.first);
        //     }
        // }
        return ans;
    }
};
