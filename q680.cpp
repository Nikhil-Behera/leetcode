/*Given a string s, return true if the s can be palindrome after deleting at most one character from it.*/
#include<iostream>
#include<vector>
using namespace std;
class Solution {
private:
    bool ispalin(string& s,int l,int r){
        while(l<r){
            if(s[l] != s[r]){
                return false;
            }
            l++;
            r--;
        }
        return true;
    }
public:
    bool validPalindrome(string s) {
        int n = s.size();
        bool flag = true;

        int left = 0;
        int right = n-1;

        while(left < right){
            if(s[left] == s[right]){
                left++;
                right--;
            }
            else{
                bool c1 = ispalin(s,left+1,right);
                bool c2 = ispalin(s,left,right-1);
                return c1||c2;
            }
        }
        return true;
    }
};