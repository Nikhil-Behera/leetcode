/*Given a string s, return true if s is a good string, or false otherwise.

A string s is good if all the characters that appear in s have the same number of occurrences (i.e., the same frequency).*/
#include<iostream>
#include<unordered_map>
using namespace std;
class Solution {
public:
    bool areOccurrencesEqual(string s) {
        unordered_map<char,int> mp;
        for(auto it : s){
            mp[it]++;
        }
        int count;
        for(auto it : mp){
            count = it.second;
            break;
        }
        for(auto it : mp){
            if(count != it.second){
                return false;
            }
        }
        return true;
    }
};