/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 * Time Complexity : O(n)
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int sz=0;
        ListNode* temp=head;
        while(temp!=NULL){
            temp=temp->next;
            sz++;
        }
        int gt=sz-n;
        if(gt==0){
            head=head->next;
            return head;
        }
        ListNode* x=head;
        for(int i=0;i<gt-1;i++){
            x=x->next;
        }
        x->next=x->next->next;
        return head;
    }
};