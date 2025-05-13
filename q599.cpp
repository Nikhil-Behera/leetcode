/*Given two arrays of strings list1 and list2, find the common strings with the least index sum.

A common string is a string that appeared in both list1 and list2.

A common string with the least index sum is a common string such that if it appeared at list1[i] and list2[j] then i + j should be the minimum value among all the other common strings.

Return all the common strings with the least index sum. Return the answer in any order.*/
#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        vector<string> ans;
        vector<int> indices;
        int ind=0;
        for(int i=0;i<list1.size();i++){
            for(int j=0;j<list2.size();j++){
                if(list1[i] == list2[j]){
                    indices.push_back(i+j);
                    ans.push_back(list1[i]);
                }
            }
        }
        // int min=0;
        // for(int i=1;i<indices.size();i++){
        //     if(indices[min] > indices[i]){
        //         min = i;
        //     }
        // }

        int minsum =0;
        for(int i=1;i<indices.size();i++){
            if(indices[minsum] > indices[i]){
                minsum = i;
            }
        }
        
        vector<string> res;
        for(int i=0;i<indices.size();i++){
            if(indices[i] == indices[minsum]){
                res.push_back(ans[i]);
            }
        }

        return res;
    }
};