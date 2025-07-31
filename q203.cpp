/*Given the head of a linked list and an integer val, remove all the nodes of the linked list that has Node.val == val, and return the new head.*/
#include<iostream>
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
    ListNode* removeElements(ListNode* head, int val) {
        while(head!=nullptr && head->val==val){
            head=head->next;
        }
        ListNode* curr = new ListNode;
        curr = head;
        while(curr!=nullptr && curr->next != nullptr){
            if(curr->next->val == val){
                curr->next = curr->next->next;
            }
            else{
                curr=curr->next;
            }
        }
        return head;
    }
};