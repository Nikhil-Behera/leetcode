/*You are given the head of a linked list. Delete the middle node, and return the head of the modified linked list.

The middle node of a linked list of size n is the ⌊n / 2⌋th node from the start using 0-based indexing, where ⌊x⌋ denotes the largest integer less than or equal to x.

For n = 1, 2, 3, 4, and 5, the middle nodes are 0, 1, 1, 2, and 2, respectively.*/
#include<iostream>
#include<vector>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
 };
 
class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        if (!head || !head->next) {
            return nullptr;
        }

        int n = 0;
        ListNode* temp = head;

        while (temp) {
            n++;
            temp = temp->next;
        }

        int mid = n / 2; 
        ListNode* prev = head;

        for (int i = 0; i < mid - 1; i++) {
            prev = prev->next;
        }

        ListNode* curr = prev->next;
        prev->next = curr->next;
        delete curr;

        return head;
    }
};
