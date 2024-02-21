/*
Given the heads of two singly linked-lists headA and headB, return the node at which the two 
lists intersect. 
If the two linked lists have no intersection at all, return null.
Time Complexity : O(n)
Space Complexity : O(1)
*/
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int size1=0,size2=0,diff;
        ListNode* temp1=headA;
        ListNode* temp2=headB;
        while(temp1!=NULL){
            size1++;
            temp1=temp1->next;
        }
        while(temp2!=NULL){
            size2++;
            temp2=temp2->next;
        }
        if(size1<size2){
            temp1=headB;
            temp2=headA;
            diff=size2-size1;
        }
        else{
            temp1=headA;
            temp2=headB;
            diff=size1-size2;
        }
        for(int i=0;i<diff;i++){
            temp1=temp1->next;
        }
        while(temp1!=NULL && temp2!=NULL){
            if(temp1==temp2){
                return temp1;
            }
            temp1=temp1->next;
            temp2=temp2->next;
        }
        return NULL;
    }
};