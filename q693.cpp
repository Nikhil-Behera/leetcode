/*Given a positive integer, check whether it has alternating bits: namely, if two adjacent bits will always have different values.*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {

    string dectobin(int n){
        string bin="";
        while(n>0){
            int bit = n%2;
            bin.push_back('0'+ bit);
            n /= 2;
        }
        reverse(bin.begin(),bin.end());
        return bin;
    }

public:
    bool hasAlternatingBits(int n) {
        string bin = dectobin(n);

        bool check = true;

        for(int i=0;i+1<bin.size();i++){
            if(bin[i] == '0'){
                if(bin[i+1] !='1'){
                    check = false;
                    break;
                }
            }
            else if(bin[i] == '1'){
                if(bin[i+1] != '0'){
                    check = false;
                    break;
                }
            }
            else{
                continue;
            }
        }
        if(check){
            return check;
        }
        return check;
    }
};