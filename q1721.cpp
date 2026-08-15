/*You are given the head of a linked list, and an integer k.

Return the head of the linked list after swapping the values of the kth node from the beginning and the kth node from the end (the list is 1-indexed).*/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode dummy(0);
        dummy.next = head;

        ListNode* fast = &dummy;
        ListNode* slow = &dummy;

        for(int i=0;i<k;i++){
            fast = fast->next;
        }

        while(fast->next != nullptr){
            fast = fast->next;
            slow = slow->next;
        }

        int end_val = slow->next->val;
        int front_val;
        ListNode* ch1 = &dummy;
        for(int i=0;i<k;i++){
            ch1 = ch1->next;
        }

        front_val = ch1->val;
        ch1->val = end_val;

        ListNode* ch2 = &dummy;
        while(ch1->next != nullptr){
            ch1 = ch1->next;
            ch2 = ch2->next;
        }

        ch2->next->val = front_val;

        return dummy.next;
    }
};