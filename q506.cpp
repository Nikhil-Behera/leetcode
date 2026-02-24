/*You are given an integer array score of size n, where score[i] is the score of the ith athlete in a competition. All the scores are guaranteed to be unique.

The athletes are placed based on their scores, where the 1st place athlete has the highest score, the 2nd place athlete has the 2nd highest score, and so on. The placement of each athlete determines their rank:

The 1st place athlete's rank is "Gold Medal".
The 2nd place athlete's rank is "Silver Medal".
The 3rd place athlete's rank is "Bronze Medal".
For the 4th place to the nth place athlete, their rank is their placement number (i.e., the xth place athlete's rank is "x").
Return an array answer of size n where answer[i] is the rank of the ith athlete.*/
#include<iostream>
#include<vector>
#include<queue>
using namespace std;
class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        int n = score.size();
        priority_queue<pair<int,int>> pq;
        vector<string> ans(n);

        for(int i=0;i<n;i++){
            pq.push({score[i],i});
        }

        int rank = 1;
        while(!pq.empty()){
            pair<int,int> temp = pq.top();
            pq.pop();

            if(rank == 1){
                ans[temp.second] = "Gold Medal";
            }
            else if(rank == 2){
                ans[temp.second] = "Silver Medal";
            }
            else if(rank == 3){
                ans[temp.second] = "Bronze Medal";
            }
            else{
                ans[temp.second] = to_string(rank);
            }
            rank++;
        }
        return ans;
    }
};