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
    ListNode* swapNodes(ListNode* head, int k) {
        int size=0;
        ListNode* temp=head;
        while(temp!=NULL){
            size++;
            temp=temp->next;
        }
        if (k <= 0 || k > size) return head;
        temp=head;
        ListNode *prev1 = nullptr, *prev2 = nullptr, *nxt1 = nullptr, *nxt2 = nullptr, *n1 = nullptr, *n2 = nullptr;        temp=head;
        int i=1;
        while(temp!=NULL){
            if(i == k-1){
                prev1=temp;
            }
            else if(i==k){
                n1=temp;
            }
            if(i==(size-k)){
                prev2=temp;
            }
            else if(i==(size-k+1)){
                n2=temp;
            }
            temp=temp->next;
            i++;
        }
        if (n1 != nullptr && n2 != nullptr) {
            if (prev1 != nullptr) {
                prev1->next = n2;
            } else {
                head = n2;
            }
            if (prev2 != nullptr) {
                prev2->next = n1;
            } else {
                head = n1;
            }
            ListNode* tempNext = n1->next;
            n1->next = n2->next;
            n2->next = tempNext;
        }
        return head;
    }
};