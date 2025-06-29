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
    bool hasCycle(ListNode *head) {
        ListNode* slow = head;
        while(head!=nullptr && head->next!=nullptr){
            slow=slow->next;
            head=head->next->next;
            if(slow==head) return true;
        }
        return false;
    }
};