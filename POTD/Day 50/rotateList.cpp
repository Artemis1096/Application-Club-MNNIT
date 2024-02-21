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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == NULL || head->next == NULL)
            return head;

        int size=0,n;
        ListNode* temp1=head;
        ListNode* temp2=head;
        while(temp1!=NULL){
            size++;
            temp1=temp1->next;
        }
        k=k%size;
        if(k==0)    return head;
        temp1=head;
        ListNode* prev1=head;
        ListNode* prev2=head;
        while(k-- && temp1!=NULL){
            temp1=temp1->next;
        }
        while(temp1!=NULL){
            prev1=temp1;
            prev2=temp2;
            temp1=temp1->next;          
            temp2=temp2->next;          
        }
        prev1->next=head;
        prev2->next=NULL;
        return temp2;
    }
};

// APPROACH 2

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
    ListNode* rotateRight(ListNode* head, int k) {
        if (head == nullptr || head->next == nullptr)
            return head;

        int size = 1;
        ListNode* temp1 = head;
        while (temp1->next != nullptr) {
            size++;
            temp1 = temp1->next;
        }

        k = k % size;
        if (k == 0)    
            return head;

        temp1->next = head; 
        ListNode* temp = head;
        for (int i = 0; i < size - k - 1; i++) {
            temp = temp->next;
        }

        ListNode* newHead = temp->next;
        temp->next = nullptr;

        return newHead;
    }
};