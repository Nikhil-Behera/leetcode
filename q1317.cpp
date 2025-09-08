/*No-Zero integer is a positive integer that does not contain any 0 in its decimal representation.

Given an integer n, return a list of two integers [a, b] where:

a and b are No-Zero integers.
a + b = n
The test cases are generated so that there is at least one valid solution. If there are many valid solutions, you can return any of them.*/
#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
        bool contains_zero(int k){
            if( k == 0) return true;
            while( k > 0){
                if( k % 10 == 0 ) return true;
                k /= 10;
            }
            return false;
        }
    vector<int> getNoZeroIntegers(int n) {
        vector<int> ans;

        for(int i=1;i<=n;i++){
            int a=i;
            int b=n-i;
            if( !contains_zero(a) && !contains_zero(b)){
                ans.push_back(a);
                ans.push_back(b);
                break;
            }
        }
        return ans;
    }
};