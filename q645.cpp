/*You have a set of integers s, which originally contains all the numbers from 1 to n. Unfortunately, due to some error, one of the numbers in s got duplicated to another number in the set, which results in repetition of one number and loss of another number.

You are given an integer array nums representing the data status of this set after the error.

Find the number that occurs twice and the number that is missing and return them in the form of an array.*/
#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        
        int n= nums.size();
        vector<int> vec(n,0);
        for(int i=0;i<n;i++){
            vec[nums[i]-1]++;
        }
      
        int dup=-1;
        int miss=-1;
        for(int i=0;i<n;i++){
            if(vec[i]==2) dup=i+1;
            if(vec[i]==0) miss=i+1;
        }
        return {dup,miss};
    }
};