/*We are given a list nums of integers representing a list compressed with run-length encoding.

Consider each adjacent pair of elements [freq, val] = [nums[2*i], nums[2*i+1]] (with i >= 0).  For each such pair, there are freq elements with value val concatenated in a sublist. Concatenate all the sublists from left to right to generate the decompressed list.

Return the decompressed list.*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int> ans;
        int n = nums.size();

        for(int i=0;i+1<n;i++){
           if(i%2==0){
                int freq = nums[i];
                int val = nums[i+1];

                for(int j=0;j<freq;j++){
                    ans.push_back(val);
            }
           }
        }
        return ans;
    }
};