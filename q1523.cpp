/*Given two non-negative integers low and high. Return the count of odd numbers between low and high (inclusive).*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    int countOdds(int low, int high) {
        int ans=0;
        if(low%2!=0 && high%2!=0) ans = high-low+2;
        else ans = high - low +1;
        return ans/2;
    }
};