/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head == NULL)
        {
            return head;
        }
        ListNode* t = head->next;
        ListNode* temp = reverseList(t);
        if(temp == NULL)
            return head;
        t = temp;    
        head->next->next=head;
        head->next=NULL;
        return temp;
    }
};