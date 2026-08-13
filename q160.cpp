/*Given the heads of two singly linked-lists headA and headB, return the node at which the two lists intersect. If the two linked lists have no intersection at all, return null.*/
#include<unordered_set>
using namespace std;
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* currA = headA;
        ListNode* currB = headB;
        unordered_set<ListNode*> visited;

        while(currA != nullptr){
            visited.insert(currA);
            currA = currA->next;
        }

        while(currB != nullptr){
            if(visited.count(currB)){
                return currB;
            }
            else{
                visited.insert(currB);
                currB = currB->next;
            }
        }
        return NULL;
    }
};