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
        unordered_map<ListNode*, int> freq;
        while(headA){
            freq[headA];
            headA=headA->next;
        } 
        while(headB){
            if(freq.find(headB)!=freq.end()){
                return headB;
            }
            headB = headB->next;
        }

        return NULL;
    }
};