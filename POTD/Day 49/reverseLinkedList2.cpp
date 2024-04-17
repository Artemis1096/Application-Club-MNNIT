/*
Given the head of a singly linked list and two integers left and right where left <= right, 
reverse the nodes of the list from position left to position right, and return the reversed list.
Time Complexity : O(n)
Space Complexity : O(1)
*/
class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if (head == nullptr || head->next == nullptr || left == right) {
            return head;
        }
        
        ListNode dummy(0);
        dummy.next = head;
        ListNode* x = &dummy;
        
        for (int i = 0; i < left - 1; ++i) {
            x = x->next;
        }
        
        ListNode* start = x->next;
        ListNode* prev = nullptr;
        ListNode* curr = start;
        for (int i = left; i <= right; ++i) {
            ListNode* nextNode = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextNode;
        }
        
        x->next = prev;
        start->next = curr;
        
        return dummy.next;
    }
};
