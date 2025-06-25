/*Given two strings s and t, return true if t is an anagram of s, and false otherwise.*/
#include<iostream>
#include<unordered_map>
using namespace std;
class Solution {
public:
    bool isAnagram(string s, string t) {
        // sort(s.begin(),s.end());
        // sort(t.begin(),t.end());          // correct logic but kharab complexity.
        // if(s==t) return true;
        // return false;
        unordered_map<char,int> sts;
        unordered_map<char,int> stt;
        for(auto it : s){
            sts[it]++;
        }
        for(auto it : t){
            stt[it]++;
        }
        if(sts == stt) return true;
        return false;
    }
};