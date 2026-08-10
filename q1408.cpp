/*Given an array of string words, return all strings in words that are a substring of another word. You can return the answer in any order.*/
#include<iostream>
#include<vector>
#include<string>
using namespace std;
class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
        int n = words.size();
        vector<string> ans;

        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(i != j){
                    if(words[j].find(words[i]) != string::npos){
                        ans.push_back(words[i]);
                        break;
                    }
                }
            }
        }
        return ans;
    }
};