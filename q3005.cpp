/*You are given an array nums consisting of positive integers.

Return the total frequencies of elements in nums such that those elements all have the maximum frequency.

The frequency of an element is the number of occurrences of that element in the array.*/
#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int> mp;
        int max=0;
        int ans=0;

        for(auto it : nums){
            mp[it]++;
        }


        // for(auto it : mp){
        //     if(it.second > max){
        //         max = it.second;
        //         for(auto it : mp){
        //             if(it.second == max){
        //                 ans += it.second;
        //             }
        //         }
        //     }
        // }

        for(auto it : mp){
            if(it.second > max){
                max = it.second;
            }
        }

        for(auto it : mp){
            if(it.second == max){
                ans += it.second;
            }
        }

        return ans;
    }
};