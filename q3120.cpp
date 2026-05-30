/*You are given a string word. A letter is called special if it appears both in lowercase and uppercase in word.

Return the number of special letters in word.*/
#include<string>
#include<vector>
using namespace std;
class Solution {
public:
    int numberOfSpecialChars(string word) {
        int size = word.size();
        vector<bool> lowercase(26,false);
        vector<bool> uppercase(26,false);

        for(auto it : word){
            if(it >= 'a' && it <= 'z'){
                lowercase[it - 'a'] = true;
            }
            else if(it >= 'A' && it <= 'Z'){
                uppercase[it - 'A'] = true;
            }
        }
        int count = 0;

        for(int index = 0; index < 26 ; index++){
            if(lowercase[index] == true && uppercase[index] == true){
                count++;
            }
        }
        return count;
    }
};