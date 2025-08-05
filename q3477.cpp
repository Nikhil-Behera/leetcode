/*You are given two arrays of integers, fruits and baskets, each of length n, where fruits[i] represents the quantity of the ith type of fruit, and baskets[j] represents the capacity of the jth basket.

From left to right, place the fruits according to these rules:

Each fruit type must be placed in the leftmost available basket with a capacity greater than or equal to the quantity of that fruit type.
Each basket can hold only one type of fruit.
If a fruit type cannot be placed in any basket, it remains unplaced.
Return the number of fruit types that remain unplaced after all possible allocations are made.*/
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        int n = fruits.size();
        int m = baskets.size();
        vector<bool> used(m,false);
        int unplaced=0;

        for(int i=0;i<n;i++){
            bool placed = false;
            for(int j=0;j<m;j++){
                if(!used[j] && fruits[i] <= baskets[j]){
                    placed = true;
                    used[j] = true;
                    break;
                }
            }
            if(placed == false){
                unplaced++;
            }
        }
        return unplaced;
    }
};