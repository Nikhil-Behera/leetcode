/*Given a string s, reverse only all the vowels in the string and return it.

The vowels are 'a', 'e', 'i', 'o', and 'u', and they can appear in both lower and upper cases, more than once.*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
private:
    bool isvow(char& x){
        if(x=='a' || x=='e' || x=='i' || x=='o' || x=='u' || x=='A' ||x=='E' || x=='I' || x=='O' || x=='U'){
            return true;
        }
        return false;
    }
public:
    string reverseVowels(string s) {
        int n = s.size();
        int left = 0;
        int right = n-1;

        while(left < right){
            while(left < right && !isvow(s[left])){
                left++;
            }
            while(left < right && !isvow(s[right])){
                right--;
            }

            swap(s[left],s[right]);

            left++;
            right--;
        }
        return s;
    }
};