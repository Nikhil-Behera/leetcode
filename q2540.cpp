/*Given two integer arrays nums1 and nums2, sorted in non-decreasing order, return the minimum integer common to both arrays. If there is no common integer amongst nums1 and nums2, return -1.

Note that an integer is said to be common to nums1 and nums2 if both arrays have at least one occurrence of that integer.*/
#include<iostream>
#include<vector>
#include<set>
using namespace std;
class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size();
        int n = nums2.size();

        set<int> first;

        for(auto it : nums1){
            first.insert(it);
        }

        for(auto it : nums2){
            if(first.count(it)){
                return it;
            }
        }
        return -1;
    }
};