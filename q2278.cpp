/*Given a string s and a character letter, return the percentage of characters in s that equal letter rounded down to the nearest whole percent.*/
#include<iostream>
using namespace std;
class Solution {
public:
    int percentageLetter(string s, char letter) {
        float n = s.size();
        float count=0;
        for(int i=0;i<n;i++){
            if(s[i] == letter){
                count++;
            }
        }
        
        return (count*100)/n;
    }
};