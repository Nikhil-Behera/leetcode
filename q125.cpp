/*A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.

Given a string s, return true if it is a palindrome, or false otherwise.

 */
#include <iostream>
#include <vector>
#include <cctype>
using namespace std;
class Solution {
public:
    bool isPalindrome(string s) {
        vector<char> my_str;
        int n = s.size();
        for(int i=0;i<n;i++){
            if(isalnum(s[i])){
                s[i] = tolower(s[i]);
                my_str.push_back(s[i]);
            }
        }
        int i=0;
        int j= my_str.size() - 1;
        bool ans = true;
        while(i<j){
            if(my_str[i] != my_str[j]){
                ans = false;
                break;
            }
            i++;
            j--;
        }
        return ans;
    }
};