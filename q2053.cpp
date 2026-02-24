/*A distinct string is a string that is present only once in an array.

Given an array of strings arr, and an integer k, return the kth distinct string present in arr. If there are fewer than k distinct strings, return an empty string "".

Note that the strings are considered in the order in which they appear in the array.*/
#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;
class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string,int> mp;

        for(auto it : arr){
            mp[it]++;
        }
        
        for(auto it : arr){
            if(mp[it] == 1){
                k--;
                if(k == 0){
                    return it;
                }
            }
        }
        return "";
    }
};