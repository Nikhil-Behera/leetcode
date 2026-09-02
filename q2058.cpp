/*Given a linked list head, return an array of length 2 containing [minDistance, maxDistance] where minDistance is the minimum distance between any two distinct critical points and maxDistance is the maximum distance between any two distinct critical points. If there are fewer than two critical points, return [-1, -1].*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        ListNode* curr = head;
        vector<int> vals;

        while(curr != nullptr){
            vals.push_back(curr->val);
            curr = curr->next;
        }

        int n = vals.size();
        vector<int> critical_points;

        for(int i=1;i<n-1;i++){
            if((vals[i] > vals[i-1] && vals[i] > vals[i+1])||
                vals[i]<vals[i-1] && vals[i] < vals[i+1]){
                    critical_points.push_back(i);
            }
        }

        if(critical_points.size() < 2){
            return {-1,-1};
        }

        int mindist = INT_MAX;

        for(int i=1;i<critical_points.size();i++){
            mindist = min(mindist,critical_points[i] - critical_points[i-1]);
        }
        int maxdist = critical_points.back() - critical_points.front();

        return {mindist,maxdist};
    }
};