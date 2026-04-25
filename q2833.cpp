/*You are given a string moves of length n consisting only of characters 'L', 'R', and '_'. The string represents your movement on a number line starting from the origin 0.

In the ith move, you can choose one of the following directions:

move to the left if moves[i] = 'L' or moves[i] = '_'
move to the right if moves[i] = 'R' or moves[i] = '_'
Return the distance from the origin of the furthest point you can get to after n moves.*/
#include<iostream>
#include<algorithm>
#include<unordered_map>
#include<vector>
using namespace std;
class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int size = moves.size();
        int distance = 0;

        unordered_map<char,int> most;

        for(auto it : moves){
            most[it]++;
        }

        int l_count = 0;
        int r_count = 0;
        for(auto it : most){
            if(it.first == 'L'){
                l_count += it.second;
            }
            else if(it.first == 'R'){
                r_count += it.second;
            }
            else{
                continue;
            }
        }

        for(int index = 0;index < size; index++){
            if(moves[index] == '_'){
                if(l_count > r_count){
                    moves[index] = 'L';
                }
                else{
                    moves[index] = 'R';
                }
            }
        }

        for(int index=0;index<size;index++){
            if(moves[index] == 'L'){
                distance--;
            }
            else if(moves[index] == 'R'){
                distance++;
            }
        }
        return abs(distance);
    }
};