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
 * Space Complexity : O(1)
 */
class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        ListNode* dummy=new ListNode();
        ListNode* temp=dummy;
        ListNode* temp1=head;
        while(temp1!=NULL){
            if(temp1->val<x){
                ListNode* node=new ListNode(temp1->val);
                temp->next=node;
                temp=temp->next;
            }
            temp1=temp1->next;
        }
        temp1=head;
        while(temp1!=NULL){
            if(temp1->val>=x){
                ListNode* node=new ListNode(temp1->val);
                temp->next=node;
                temp=temp->next;
            }
            temp1=temp1->next;
        }
        return dummy->next;
    }
};