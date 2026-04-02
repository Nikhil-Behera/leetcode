/*You are given an array target of n integers. From a starting array arr consisting of n 1's, you may perform the following procedure :

let x be the sum of all elements currently in your array.
choose index i, such that 0 <= i < n and set the value of arr at index i to x.
You may repeat this procedure as many times as needed.
Return true if it is possible to construct the target array from arr, otherwise, return false.

 */
 #include<iostream>
 #include<vector>
 #include<algorithm>
 using namespace std;
 class Solution {
public:
    bool isPossible(vector<int>& target) {
        int n = target.size();
        vector<int> arr;

        priority_queue<int> pq;
        for(auto it : target){
            pq.push(it);
        }

        long long restsum = 0;
        for(auto it : target){
            restsum += it;
        }

        while(pq.top() > 1){
            long long top = pq.top();
            long long rest = restsum - top;
            if(rest <= 0) return false;
            long long newval = top % rest;
            if(newval == 0) newval = rest;
            if(newval >= top) return false;
            pq.pop();
            pq.push(newval);
            restsum = restsum - top + newval;
        }

        return true;
    }
};