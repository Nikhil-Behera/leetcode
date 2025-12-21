/*
Given an unsorted array of integers nums, return the length of the longest consecutive elements sequence.

You must write an algorithm that runs in O(n) time.

 

Example 1:

Input: nums = [100,4,200,1,3,2]
Output: 4
Explanation: The longest consecutive elements sequence is [1, 2, 3, 4]. Therefore its length is 4.
Example 2:

Input: nums = [0,3,7,2,5,8,4,6,0,1]
Output: 9
Example 3:

Input: nums = [1,0,1,2]
Output: 3
*/
#include<iostream>
#include<vector>
#include<unordered_map>
#include<unordered_set>
#include<algorithm>
#include<string>
using namespace std;
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        int best = 0;

        unordered_set<int> st;
        for(auto it : nums){
            st.insert(it);
        }

        for(auto it : st){
            if(st.find(it-1) == st.end()){
                int currnum = it;
                int currseq = 1;

                while(st.find(currnum+1) != st.end()){
                    currnum += 1;
                    currseq += 1;
                }
                best = max(best,currseq);
            }
        }
        return best;
    }
};