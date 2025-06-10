#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        // vector<int> res;
        int n= nums.size();
        int max=nums[0];
        for(int i=0;i<n;i++){
            if(nums[i]>max){
                max = nums[i];
            }
        }
        for(int i=0;i<n;i++){
            if(nums[i]<max){
                while(nums[i]!=max){
                    nums[i] = nums[i]+1;
                }
            }
            else{
                nums[i] =-1 ;
            }
        }
    }
};
                // int k = max-nums[i];      this was another trial approach.
                // for(int j=0;j<k;j++){
                //     nums[i] = nums[i]+1;
                // }