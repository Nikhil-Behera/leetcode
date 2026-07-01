#include<iostream>
#include<vector>
#include<map>
using namespace std;
class Solution {
public:
    void sortColors(vector<int>& nums) {
        // sort(nums.begin(),nums.end());
        // for(int i=0;i<nums.size();i++){
        //     cout<<nums[i];
        // }


        // int n=nums.size();
        // for(int i=0;i<n;i++){
        //     for(int j=0;j<n-i-1;j++){
        //         if(nums[j]>nums[j+1]){
        //             swap(nums[j],nums[j+1]);
        //         }
        //     }
        // }
        // for(int i=0;i<nums.size();i++){
        //     cout<<nums[i];}

        

            int size = nums.size();

            map<int,int> mp;

            for(auto it : nums){
                mp[it]++;
            }

            int i=0;
            for(auto it : mp){
                for(int j=0;j<it.second;j++){
                    nums[i] = it.first;
                    i++;
                }  
            }

        
    }
};