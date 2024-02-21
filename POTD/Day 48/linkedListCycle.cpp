/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 * Time Complexity : O(n)
 * Space Complexity : O(1)
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        if(head==NULL || head->next==NULL){
            return false;
        }
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast && slow && fast->next){
            slow=slow->next;
            fast=fast->next->next;
            if(fast==slow)
                return true;
    }
    return false;
    }
};