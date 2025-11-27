/*Given two strings s and t, return true if they are equal when both are typed into empty text editors. '#' means a backspace character.

Note that after backspacing an empty text, the text will continue empty.*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string res = "";
        string sec = "";

        for(char x : s){
            if(x != '#') res.push_back(x);
            else if(x == '#'){
                if(!res.empty()){
                    res.pop_back();
                }
            }
        }
        for(char x : t){
            if(x != '#') sec.push_back(x);
            else if(x == '#'){
                if(!sec.empty()){
                    sec.pop_back();
                }
            }
        }
        return res == sec;
    }
};