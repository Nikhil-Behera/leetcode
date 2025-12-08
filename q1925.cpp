/*A square triple (a,b,c) is a triple where a, b, and c are integers and a2 + b2 = c2.

Given an integer n, return the number of square triples such that 1 <= a, b, c <= n.*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    int countTriples(int n) {
        int ans = 0;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                int c = int(sqrt(i*i+j*j));
                if(c <= n && c*c == i*i + j*j){
                    ans++;
                }
            }
        }
        return ans;
    }
};