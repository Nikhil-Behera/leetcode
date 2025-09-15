/*There is a malfunctioning keyboard where some letter keys do not work. All other keys on the keyboard work properly.

Given a string text of words separated by a single space (no leading or trailing spaces) and a string brokenLetters of all distinct letter keys that are broken, return the number of words in text you can fully type using this keyboard.
*/
#include<iostream>
#include<set>
#include<sstream>
#include<vector>
using namespace std;
class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        set<char> st;
        for(auto it : brokenLetters){
            st.insert(it);
        }
        
        stringstream ss(text);
        vector<string> text1;
        string word;
        while(ss >> word){
            text1.push_back(word);
        }
        
        int count = 0;
        for(auto word : text1){
            bool is_typable = true;
            for(auto lett : word){
                if(st.count(lett)){
                    is_typable = false;
                }
            }

            if(is_typable){
                count++;
            }
        }
        return count;
    }
};