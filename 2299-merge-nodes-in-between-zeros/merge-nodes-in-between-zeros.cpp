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
    ListNode* mergeNodes(ListNode* head) {
        int sum = 0;
        ListNode* res = nullptr;
        ListNode* last = nullptr;
        head = head->next; // Skip the initial 0 node
        
        while (head != nullptr) {
            if (head->val == 0) {
                ListNode* newNode = new ListNode(sum);
                if (res == nullptr) {
                    res = newNode;
                } else {
                    last->next = newNode;
                }
                last = newNode;
                sum = 0;
            } else {
                sum += head->val;
            }
            head = head->next;
        }
        
        return res;
    }
};
