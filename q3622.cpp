/*You are given a positive integer n. Determine whether n is divisible by the sum of the following two values:

The digit sum of n (the sum of its digits).

The digit product of n (the product of its digits).

Return true if n is divisible by this sum; otherwise, return false.*/
#include<iostream>
using namespace std;
class Solution {
public:
    bool checkDivisibility(int n) {
        int sumn = n;
        int prodn = n;
        int sum = 0;
        int prod = 1;

        while(sumn > 0){
            int dig = sumn % 10;
            sum += dig;
            sumn = sumn/10;
        }
        while(prodn > 0){
            int dig = prodn%10;
            prod *= dig;
            prodn = prodn/10;
        }

        if(n % (sum + prod) == 0){
            return true;
        }
        return false;
    }
};