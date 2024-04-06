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
        ListNode* node = new ListNode();
        ListNode* tmp = node;
        int carry = 0;
    
        while (l1 || l2 || carry) {
            int n1 = l1 ? l1->val : 0;
            int n2 = l2 ? l2->val : 0;
            int n = (n1 + n2) + carry;
            int digit = n % 10;
            
            tmp->val = digit;
            carry = n / 10;
            
            l1 = l1 ? l1->next : nullptr;
            l2 = l2 ? l2->next : nullptr;
            
            if (l1 || l2 || carry) {
                tmp->next = new ListNode();
                tmp = tmp->next;
            }
        }
        
        return node;
    }
};