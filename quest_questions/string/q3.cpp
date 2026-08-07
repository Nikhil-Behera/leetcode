/*You are given a personal information string s, representing either an email
 * address or a phone number. Return the masked personal information using the
 * below rules.*/
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Solution {
public:
  string email(string s) { 
    int pos = 0;
    for(int i=0;i<s.size();i++){
        if(s[i] == '@'){
            break;
        }
        else{
            pos++;
        }
    }
    
    char first_letter = tolower(s[0]);
    char last_letter = tolower(s[pos-1]);

    string domain = s.substr(pos);
    for(int i=0;i<domain.size();i++){
        domain[i] = tolower(domain[i]);
    }

    string ans;
    ans += first_letter;
    ans += "*****";
    ans += last_letter;
    ans += domain;

    return ans; 
  }

  string numb(string s) { 
    string num;
    for(int i=0;i<s.size();i++){
        if(isdigit(s[i])){
            num += s[i];
        }
    }

    int n = num.size();

    string last_four = num.substr(n - 4);

    string ans;
    if(n == 10){
        ans += "***-***-";
        ans += last_four;
    }
    else if(n == 11){
        ans += "+*-***-***-";
        ans += last_four;
    }
    else if(n == 12){
        ans += "+**-***-***-";
        ans += last_four;
    }
    else{
        ans += "+***-***-***-";
        ans += last_four;
    }
    return ans; 
  }

  string maskPII(string s) {
    int n = s.size();
    bool flag = false;
    for (int i = 0; i < n; i++) {
      if(s[i] == '@'){
        flag = true;
        break;
      }
    }
    if(flag){
        return email(s);
    }
    return numb(s);
  }
};