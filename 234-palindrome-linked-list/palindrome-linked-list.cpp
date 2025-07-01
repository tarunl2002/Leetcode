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
    bool isPalindrome(ListNode* head) {
        stack<int> st;
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast!=NULL && fast->next != NULL){
            st.push(slow->val);
            slow=slow->next;
            fast=fast->next->next;
        }
        if(fast!=NULL) st.push(slow->val);
        while(!st.empty() && slow!=NULL){
            if(st.top()==slow->val){
                st.pop();
                slow=slow->next;
            }
            else break;
        }
        return st.empty() ? true : false;
    }
};