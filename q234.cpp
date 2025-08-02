/*Given the head of a singly linked list, return true if it is a palindrome or false otherwise.*/


struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
};
 
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        ListNode* curr = head;
        ListNode* dummy = new ListNode(0);
        ListNode* ans = dummy;

        while(curr != nullptr){
            ans->next = new ListNode(curr->val);
            ans = ans->next;
            curr = curr->next;
        }

        ListNode* prev = nullptr;
        ListNode* curr1 = head;

        while(curr1 != nullptr){
            ListNode* nt = curr1->next;
            curr1->next = prev;
            prev =curr1;
            curr1 = nt;
        }
        ListNode* a = prev;         
        ListNode* b = dummy->next;  

        while (a != nullptr && b != nullptr) {
            if (a->val != b->val) return false;
            a = a->next;
            b = b->next;
        }

        return true;
    }
};