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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int c=0;
        ListNode* temp=head;
        while(temp!=nullptr){
            temp=temp->next;
            c++;
        }
        if(c==n){
            ListNode* toDelete = head;
            head=head->next;
            delete toDelete;
            return head;
        }
        temp = head;
        for(int i=0;i<c-n-1;i++){
            temp=temp->next;
        }
        ListNode* toDelete = temp->next;
        temp->next=toDelete->next;
        delete toDelete;
        return head;
    }
};