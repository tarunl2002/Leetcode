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
    ListNode* doubleIt(ListNode* head) {
        ListNode* prev = nullptr;
        ListNode* current = head;
        ListNode* next = nullptr;
        ListNode* result = nullptr;
        int c=0;int s;

        while (current != nullptr) {
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }
        current = prev;
        while (current != nullptr) {
            s = ((current->val * 2)+c);
            int f=s%10;
            c = s / 10;
            ListNode* newNode = new ListNode(f);
            newNode->next = result;
            result = newNode;
            current=current->next;
        }
        if(s>=10){
            ListNode* newNode = new ListNode(1);
            newNode->next = result;
            result = newNode;
        }
        return result;
    }
};