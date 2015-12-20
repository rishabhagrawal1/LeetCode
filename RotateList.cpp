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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == NULL || k == 0)
            return head;
        ListNode* first = head, *second = NULL, *third = NULL;
        int len = 0;
        while(first->next != NULL)
        {
            len = len + 1;
            first = first->next;
        }
        len = len+1;
        if(len == 1)
            return head; 
        if(k >= len)
            k = k % len;
        if(k == 0)
            return head;
        third = head;
        for(int i = 0; i < len-k-1; i++)
        {
            head = head->next;
        }
        second = head;
        head = head-> next;
        second->next = NULL;
        first->next = third;
        return head;
    }
};