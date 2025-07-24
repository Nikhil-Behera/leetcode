/*Given a 0-indexed integer array nums, return the number of distinct quadruplets (a, b, c, d) such that:

nums[a] + nums[b] + nums[c] == nums[d], and
a < b < c < d*/
#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int countQuadruplets(vector<int>& nums) {
        int n = nums.size();
        int count=0;
        for(int a=0;a<n;a++){
            for(int b=a+1;b<n;b++){
                for(int c=b+1;c<n;c++){
                    for(int d=c+1;d<n;d++){
                        if(nums[a] + nums[b] + nums[c] == nums[d] && a < b < c < d){
                            count++;
                        }
                    }
                }
            }
        }
        return count;
    }
};