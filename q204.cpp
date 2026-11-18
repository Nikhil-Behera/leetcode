/*Given an integer n, return the number of prime numbers that are strictly less than n. TLE */
#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int countPrimes(int n) {
        int ans = 0;

        int nos = 0;
        while(nos < n){
            int temp = 0;
            for(int i=1;i<=nos;i++){
                if(nos % i == 0){
                    temp += i;
                }
            }
            if(temp == nos+1){
                ans++;
            }
            nos++;
        }
        return ans;
    }
};