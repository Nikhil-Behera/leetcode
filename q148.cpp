/*Given the head of a linked list, return the list after sorting it in ascending order*/
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

 struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};
 
class Solution {
public:
    ListNode* insertionSortList(ListNode* head) {
        if(head == nullptr) return head;
        ListNode* curr = head;
        vector<int> val;
        while(curr != nullptr){
            val.push_back(curr->val);
            curr=curr->next;
        }

        sort(val.begin(),val.end());

        curr = head;
        for(int i=0;i<val.size();i++){
            curr->val = val[i];
            curr=curr->next;
        }
        return head;
    }
};