/*You are given an integer n. You need to check whether it is an armstrong number or not. Return true if it is an armstrong number, otherwise return false.

An armstrong number is a number which is equal to the sum of the digits of the number, raised to the power of the number of digits.*/
#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    bool isArmstrong(int n) {
        int ans = 0;
        int ogn = n;
        int lastn = n;

        int power = 0;
        while(n > 0){
            power++;
            n /= 10;
        }

        while(ogn > 0){
            int dig = ogn % 10;
            int digpow = pow(dig,power);
            ans += digpow;
            ogn /= 10;
        }
        
        if(ans == lastn){
            return true;
        }
        return false;
    }
};