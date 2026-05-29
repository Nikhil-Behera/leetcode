/*You are given an integer n.

Define its mirror distance as: abs(n - reverse(n))​​​​​​​ where reverse(n) is the integer formed by reversing the digits of n.

Return an integer denoting the mirror distance of n​​​​​​​.

abs(x) denotes the absolute value of x.*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    int mirrorDistance(int n) {
        int revn=0;
        int oldn = n;
        while(n > 0){
            int extracted = n%10;
            if(revn == 0){
                revn = extracted;
            }
            else{
                revn *= 10;
                revn += extracted;
            }
            n /= 10;
        }
        int ans = 0;
        ans = abs(oldn - revn);
        return ans;
    }
};