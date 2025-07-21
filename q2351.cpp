/*Given a string s consisting of lowercase English letters, return the first letter to appear twice.

Note:

A letter a appears twice before another letter b if the second occurrence of a is before the second occurrence of b.
s will contain at least one letter that appears twice.*/
#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
class Solution {
public:
    char repeatedCharacter(string s) {
        unordered_map<char,int> mp;
        char ans;
        for(auto it:s){
            mp[it]++;
            if(mp[it] > 1){
                ans = it;
                break;
            }
        }
        return ans;
    }
};