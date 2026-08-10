/*Given two strings a and b, return the minimum number of times you should repeat string a so that string b is a substring of it. If it is impossible for b​​​​​​ to be a substring of a after repeating it, return -1.

Notice: string "abc" repeated 0 times is "", repeated 1 time is "abc" and repeated 2 times is "abcabc".*/
#include<iostream>
#include<string>
using namespace std;
class Solution {
public:
    int repeatedStringMatch(string a, string b) {
        int count = 0;

        string t = a;
        count++;

        bool flag = false;

        while(true){
            if(t.length() > b.length() + 2 * a.length()){
                return -1;
            }
            else if(t.find(b) != string::npos){
                flag = true;
                break;
            }
            else{
                t += a;
                count++;
            }
        }

        if(!flag) return -1;

        return count;
    }
};