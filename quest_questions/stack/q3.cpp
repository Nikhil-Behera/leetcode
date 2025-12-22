#include<iostream>
#include<sstream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
class Solution {
public:
    vector<int> exclusiveTime(int n, vector<string>& logs) {
        vector<int> ans(n,0);
        vector<int> stack;
        int prev_time = 0;

        for(auto s : logs){
            stringstream ss(s);
            string segment;
            vector<string> parts;

            while(getline(ss,segment,':')){
                parts.push_back(segment);
            }

            int fid = stoi(parts[0]);
            string exe = parts[1];
            int exet = stoi(parts[2]);

            if(exe == "start"){
                if(!stack.empty()){
                    int prevfunc = stack.back();
                    ans[prevfunc] += exet - prev_time;
                }
                stack.push_back(fid);
                prev_time = exet;
            }

            if(exe == "end"){
                ans[stack.back()] += (exet - prev_time) +1;
                stack.pop_back();
                prev_time = exet +1;
            }
        }
        return ans;
    }
};