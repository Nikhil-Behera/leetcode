/*We have two special characters:

The first character can be represented by one bit 0.
The second character can be represented by two bits (10 or 11).
Given a binary array bits that ends with 0, return true if the last character must be a one-bit character.*/
#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
        int n = bits.size();

        int i=0;
        while(i < n-1){
            if(bits[i] == 0){
                i += 1;
            }
            else if(bits[i] == 1){
                i += 2;
            }
        }

        return i == n-1;
    }
};