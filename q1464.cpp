/*Given the array of integers nums, you will choose two different indices i and j of that array. Return the maximum value of (nums[i]-1)*(nums[j]-1).*/
#include<iostream>
#include<algorithm>
#include<queue>
#include<vector>
using namespace std;
// class Solution {
// public:
//     int maxProduct(vector<int>& nums) {
//         sort(nums.begin(),nums.end());
//         int n = nums.size();
//         int max = 0;
//         for(int i=0;i<n;i++){
//             for(int j=i+1;j<n;j++){
//                 if((nums[i]-1)*(nums[j]-1) > max){
//                     max = (nums[i]-1)*(nums[j]-1);
//                 }
//             }
//         }
//         return max;
//     }
// };

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        priority_queue<int> pq;
        for(auto it : nums){
            pq.push(it);
        }
        int x = pq.top() - 1;
        pq.pop();
        int y = pq.top() - 1;
        pq.pop();

        return x*y;
    }
};