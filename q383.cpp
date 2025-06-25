/*Given two strings ransomNote and magazine, return true if ransomNote can be constructed by using the letters from magazine and false otherwise.

Each letter in magazine can only be used once in ransomNote.*/
#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int> rn;
        unordered_map<char,int> mag;
        for(auto it : ransomNote){
            rn[it]++;
        }
        for(auto it : magazine){
            mag[it]++;
        }

        vector<pair<char,int>> v1;
        vector<pair<char,int>> v2;

        for(auto it : rn){
            v1.push_back({it.first,it.second});
        }
        for(auto it : mag){
            v2.push_back({it.first,it.second});
        }

        
        for(int i=0;i<v1.size();i++){
            bool suff = false;
            for(int j=0;j<v2.size();j++){
                if(v1[i].first == v2[j].first){
                    if(v1[i].second <= v2[j].second){
                        suff = true;
                        break; 
                    }
                    else{
                        return false;
                    }   
                } 
            }
            if(!suff) return false;
        }
        return true;
    }
};