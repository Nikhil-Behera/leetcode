/*We define the usage of capitals in a word to be right when one of the following cases holds:

All letters in this word are capitals, like "USA".
All letters in this word are not capitals, like "leetcode".
Only the first letter in this word is capital, like "Google".
Given a string word, return true if the usage of capitals in it is right.*/
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
class Solution {
public:
    bool detectCapitalUse(string word) {
        int n = word.size();

        bool allCaps = true;
        for(auto it : word){
            if(int(it) >= 65 && int(it) <= 90){
                continue;
            }
            else{
                allCaps = false;
                break;
            }
        }
        if(allCaps) return true;

        bool allSmall =  true;
        for(auto it : word){
            if(int(it) >= 97 && int(it) <= 122){
                continue;
            }
            else{
                allSmall = false;
                break;
            }
        }
        if(allSmall) return true;


        if(word[0] >= 65 && word[0] <= 90){
            bool restLower = true;
            for(int i=1;i<n;i++){
                if(int(word[i]) >= 97 && word[i] <= 122){
                    continue;
                }
                else{
                    restLower = false;
                    break;
                }
            }
            if(restLower) return true;
        }

        return false;
    }
};