#include<vector>
#include<iostream>
#include<unordered_map>
#include<queue>
using namespace std;
class Solution {
public:
    int majorityElement(vector<int>& nums) {
    //     for(int i = 0; i < nums.size(); i++) {
    //         int count = 0; // Reset count for each new element
    //         for(int j = 0; j < nums.size(); j++) { // Start inner loop from 0
    //             if(nums[i] == nums[j]) {
    //                 count++; // Increment count if nums[i] matches nums[j]
    //             }
    //         }
    //         if(count > nums.size() / 2) { // Check if count exceeds n/2
    //             return nums[i]; // Return majority element
    //         }
    //     }
    //     return -1; // In case no majority element is found (although problem guarantees there is one)
    // }

    //following is the solution using hash set.
     int n= nums.size();
        unordered_map<int,int> mp;
        for(auto it : nums){
            mp[it]++;
        }
        priority_queue<pair<int,int>> pq;
        for(auto it : mp){
            pq.push({it.second,it.first});
        }
        return pq.top().second;
    }
};
