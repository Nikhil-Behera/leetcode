/*Given two integer arrays arr1 and arr2, and the integer d, return the distance value between the two arrays.

The distance value is defined as the number of elements arr1[i] such that there is not any element arr2[j] where |arr1[i]-arr2[j]| <= d.*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int n = arr1.size();
        int m = arr2.size();
        int ans=0;

        for(int i=0;i<n;i++){
            bool mark=true;
            for(int j=0;j<m;j++){
                if(abs(arr1[i]-arr2[j]) <= d){
                    mark = false;
                    break;
                }
            }
            if(mark) ans++;
        }
        return ans;
    }
};