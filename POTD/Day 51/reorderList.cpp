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
 * Space Complexity : O(n)
 */
class Solution {
public:
    ListNode* reverse(ListNode* head){
        if (head == NULL) {
            return NULL;
        }
        ListNode* prev=NULL;
        ListNode* curr=head;
        ListNode* forw=NULL;
        while(curr!=NULL){
            forw=curr->next;
            curr->next=prev;
            prev=curr;
            curr=forw;
        }
        return prev;
    }
    void reorderList(ListNode* head) {
        int size=0;
        ListNode* temp=head;
        while(temp!=NULL){
            size++;
            temp=temp->next;
        }
        temp=head;
        int OriginalMid=size/2;
        int mid=size/2;
        while(mid--) temp=temp->next;

        ListNode* prev=NULL;
        ListNode* curr=temp;
        ListNode* forw=NULL;
        while(curr!=NULL){
            forw=curr->next;
            curr->next=prev;
            prev=curr;
            curr=forw;
        }
        temp=head;
        mid=OriginalMid;
        ListNode* head2=prev;
        ListNode* last = NULL;
        ListNode* first = NULL;
        while(mid-- && temp->next && head2->next){
            last=head2->next;
            first=temp->next;
            head2->next=temp->next;
            temp->next=head2;
            head2=last;
            temp=first;
        }
        return;
    }
};