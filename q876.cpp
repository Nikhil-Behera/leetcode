/*Given the head of a singly linked list, return the middle node of the linked list.

If there are two middle nodes, return the second middle node.*/


struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
};
 
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        int size=0;
        ListNode* curr = head;
        while(curr != nullptr){
            size++;
            curr = curr->next;
        }

        int mid=0;
        if(size%2 == 0){
            mid = size/2 +1;
        }
        else{
            mid = (size+1)/2;
        }

        ListNode* temp = head;
        while(mid > 1){
            if(temp != nullptr){
                temp=temp->next;
                mid--;
            }
        }
        return temp;
    }
};