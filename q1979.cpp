/*Given an integer array nums, return the greatest common divisor of the smallest number and largest number in nums.

The greatest common divisor of two numbers is the largest positive integer that evenly divides both numbers.*/
#include<vector>
using namespace std;

class Solution {
public:
    int findGCD(vector<int>& nums) {
        int size = nums.size();

        int min = nums[0];
        for(int i=1;i<size;i++){
            if(min > nums[i]){
                min = nums[i];
            }
        }

        int max = nums[0];
        for(int i=1;i<size;i++){
            if(max < nums[i]){
                max = nums[i];
            }
        }

        int ans = gcd(min,max);
        return ans;
    }
};