/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 * Time Complexity :O(n)
 * Space Complexity :O(1)
 */
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        int n=0;
        ListNode* temp=head;
        while(temp!=0){
            n++;
            temp=temp->next;
        }
        if(n%2==0){
            ListNode* temp=head;
            int i=1;
            while(i<(n/2+1)){
                temp=temp->next;
                i++;
            }
            return temp;
        }
        else{
            ListNode* temp=head;
            int i=1;
            while(i<(n+1)/2){
                temp=temp->next;
                i++;
            }
            return temp;
        }
        return head;
    }
};