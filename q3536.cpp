/*You are given a positive integer n.

Return the maximum product of any two digits in n.

Note: You may use the same digit twice if it appears more than once in n.*/
#include<iostream>
#include<queue>
#include<algorithm>
using namespace std;
class Solution {
public:
    int maxProduct(int n) {
        priority_queue<int> pq;

        while(n > 0){
            int dig = n % 10;
            n = n / 10;
            pq.push(dig);
        }

        int ans = 1;
        for(int i=0;i<2;i++){
            ans *= pq.top();
            pq.pop();
        }
        return ans;
    }
};