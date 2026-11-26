/*https://leetcode.com/problems/stone-removal-game/description/?envType=daily-question&envId=2026-11-26*/
#include<iostream>
using namespace std;
class Solution {
public:
    bool canAliceWin(int n) {
        int stones = 10;
        bool alice = false;

        while(n >= stones){
            n = n - stones;
            stones -= 1;
            alice = !alice;
        }

        return alice;
        
    }
};