/*You are given an integer array nums. A number x is lonely when it appears only once, and no adjacent numbers (i.e. x + 1 and x - 1) appear in the array.

Return all lonely numbers in nums. You may return the answer in any order.*/
#include<iostream>
#include<vector>
#include<unordered_map>
#include<map>
#include<algorithm>
using namespace std;
class Solution {
public:
    vector<int> findLonely(vector<int>& nums) {
        unordered_map<int,int> mp;
        vector<int> ans;

        for(auto it : nums){
            mp[it]++;
        }

        for(auto it : mp){
            if(it.second == 1){
                if(!mp.count(it.first+1) && !mp.count(it.first-1)){
                    ans.push_back(it.first);
                }
            }
        }
        return ans;
    }
};