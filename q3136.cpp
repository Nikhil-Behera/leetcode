/*A word is considered valid if:

It contains a minimum of 3 characters.
It contains only digits (0-9), and English letters (uppercase and lowercase).
It includes at least one vowel.
It includes at least one consonant.
You are given a string word.

Return true if word is valid, otherwise, return false.

Notes:

'a', 'e', 'i', 'o', 'u', and their uppercases are vowels.
A consonant is an English letter that is not a vowel.*/
#include<iostream>
#include<algorithm>
using namespace std;
class Solution {
public:
    bool isValid(string word) {
        int n = word.size();
        transform(word.begin(), word.end(), word.begin(), ::tolower);
        if(n<3) return false;
        bool vowel=false;
        bool cons=false;
        bool spec= false;
        for(auto it : word){
            if(it >= 'a' && it <= 'z' ){
                if(it == 'a' || it == 'e' || it == 'i' || it == 'o' || it == 'u' ){
                    vowel =true;
                }
                else if(it != 'a' || it != 'e' || it != 'i' || it != 'o' || it != 'u'){
                    cons = true;  
                }
            }
            else{
                if(it == '@' || it == '#' || it == '$'){
                    spec=true;
                }
            }
        }
        if(vowel == true && cons == true && spec == false){
            return true;
        }
        return false;
    }
};