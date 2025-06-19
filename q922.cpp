/*Given an array of integers nums, half of the integers in nums are odd, and the other half are even.

Sort the array so that whenever nums[i] is odd, i is odd, and whenever nums[i] is even, i is even.

Return any answer array that satisfies this condition.*/
#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        vector<int> odd;
        vector<int> even;
        int n= nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]%2==0){
                even.push_back(nums[i]);
            }
            else{
                odd.push_back(nums[i]);
            }
        }

        vector<int> ans;
        int e=0;
        int o=0;
        for(int i=0;i<n;i++){
            if(i%2==0){
                ans.push_back(even[e]);
                e++;
            }
            else{
                ans.push_back(odd[o]);
                o++;
            }
        }

        return ans;
    }
};