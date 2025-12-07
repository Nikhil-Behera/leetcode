/*Given two non-negative integers low and high. Return the count of odd numbers between low and high (inclusive).*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    int countOdds(int low, int high) {
        int ans = 0;
        while(low <= high){
            if(low%2 != 0) ans++;
            low++; 
        }
        return ans;
    }
};