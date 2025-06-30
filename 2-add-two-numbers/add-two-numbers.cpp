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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* head = new ListNode(0);
        ListNode* temp = head;
        int carry=0;
        while(l1 || l2 || carry){
            int sum;
            int digit;
            int val1 = l1 ? l1->val : 0;
            int val2 = l2 ? l2->val : 0;
            sum=(val1 + val2)+carry;
            carry = sum/10;
            digit = sum%  10 ;
            temp->next = new ListNode(digit);
            temp=temp->next;
            if(l1) l1=l1->next;
            if(l2) l2=l2->next;
        }
        return head->next;
    }
};