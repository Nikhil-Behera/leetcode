/*Given head which is a reference node to a singly-linked list. The value of each node in the linked list is either 0 or 1. The linked list holds the binary representation of a number.

Return the decimal value of the number in the linked list.

The most significant bit is at the head of the linked list.*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

 struct ListNode {
        int val;
        ListNode *next;
        ListNode() : val(0), next(nullptr) {}
        ListNode(int x) : val(x), next(nullptr) {}
        ListNode(int x, ListNode *next) : val(x), next(next) {}
 };
 
class Solution {
public:
    int getDecimalValue(ListNode* head) {
        vector<int> num;
        int ans = 0;

        while(head != nullptr){
            int val = head->val;
            num.push_back(val);
            head = head->next;
        }

        int j=0;
        for(int i=num.size()-1;i>=0;i--){
            if(num[i] == 1){
                ans += pow(2,j);   
            }
            j++;
        }
        return ans;
    }
};