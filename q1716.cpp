/*Hercy wants to save money for his first car. He puts money in the Leetcode bank every day.

He starts by putting in $1 on Monday, the first day. Every day from Tuesday to Sunday, he will put in $1 more than the day before. On every subsequent Monday, he will put in $1 more than the previous Monday.

Given n, return the total amount of money he will have in the Leetcode bank at the end of the nth day.*/
#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int totalMoney(int n) {
        int mod = 1;
        int curr = 1;
        int ans = 0;

        for(int i=0;i<n;i++){
            int dow = i % 7;

            if(dow == 0){
                curr = mod;
                mod++;
            }
            else{
                curr++;
            }

            ans += curr;
        }

        return ans;
    }
};