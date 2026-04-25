/*There is a robot starting at the position (0, 0), the origin, on a 2D plane. Given a sequence of its moves, judge if this robot ends up at (0, 0) after it completes its moves.

You are given a string moves that represents the move sequence of the robot where moves[i] represents its ith move. Valid moves are 'R' (right), 'L' (left), 'U' (up), and 'D' (down).

Return true if the robot returns to the origin after it finishes all of its moves, or false otherwise.

Note: The way that the robot is "facing" is irrelevant. 'R' will always make the robot move to the right once, 'L' will always make it move left, etc. Also, assume that the magnitude of the robot's movement is the same for each move.*/
#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;
class Solution {
public:
    bool judgeCircle(string moves) {
        int size = moves.size();
        bool origin = false;
        unordered_map<char,int> check;

        for(auto it : moves){
            check[it]++;
        }

        int l_count = 0;
        int r_count = 0;
        int u_count = 0;
        int d_count = 0;
        for(auto it : check){
            if(it.first == 'U'){
                u_count += it.second;
            }
            else if(it.first == 'R'){
                r_count += it.second;
            }
            else if(it.first == 'L'){
                l_count += it.second;
            }
            else{
                d_count += it.second;
            }
        }

        if(u_count == d_count && r_count == l_count){
            origin = true;
        }

        return origin;
    }
};