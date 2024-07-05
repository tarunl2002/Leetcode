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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
                ios_base::sync_with_stdio(false);

        vector<int> res;
        vector<int> temp;
            int mi=9999999;
        int c = 0;
        if(head->next==nullptr || head->next->next==nullptr) return {-1,-1};
        while (head->next->next != nullptr) {
            c++;
            if ((head->next->val > head->val &&
                 head->next->val > head->next->next->val) ||
                (head->next->val < head->val &&
                 head->next->val < head->next->next->val)) {
                    temp.push_back(c);
            }
            head=head->next;
        }
        if(temp.size()<2) return {-1,-1};
        for(int i=0;i<temp.size()-1;i++){
            mi=min(temp[i+1]-temp[i], mi);
        }
        
        return {mi,temp[temp.size()-1]-temp[0]};
    }
};