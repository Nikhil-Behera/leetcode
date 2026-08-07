/*Given a string s, check if it can be constructed by taking a substring of it and appending multiple copies of the substring together.*/
#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;
class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        string t = s+s;

        string middle = t.substr(1,t.size()-2);

        if(middle.find(s) != string::npos){
            return true;
        }
        return false;
    }
};