#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> ans;
        int s = target.size();
        int maxi = target[s-1]+1;
        vector<bool> check(maxi,false);
        for(auto i : target) check[i] = true;

        for(int i=1;i<maxi;i++){
            if(check[i]){
                ans.push_back("Push");
            }
            else{
                ans.push_back("Push");
                ans.push_back("Pop");
            }
        }

        return ans;
    }
};