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
    ListNode* removeNodes(ListNode* head) {
        stack<ListNode*> st;
        ListNode* result = nullptr;
        int mx=0;
        ListNode* current = head;
        while(current!=nullptr){
            st.push(current);
            current=current->next;
        }
        while(!st.empty()){
            if(st.top()->val>=mx){
                mx=st.top()->val;
                ListNode* newNode = new ListNode(st.top()->val);
                newNode->next = result;
                result = newNode;
            }
            st.pop();
        }
        return result;
    }
};