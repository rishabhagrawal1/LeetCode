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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(l1 == NULL && l2 == NULL)
        {
            return NULL;
        }
        struct ListNode* head = new ListNode(-1);
        struct ListNode* head1 = head;
        while(l1 != NULL && l2 != NULL)
        {
            if(l1->val < l2->val)
            {
                head1->next = l1;
                l1 = l1->next;  
            }
            else
            {
                head1->next = l2;
                l2 = l2->next;
            }
            head1 = head1->next;
        }
        if(l1 != NULL)
        {
            head1->next = l1;
        }
        else if(l2 != NULL)
        {
            head1->next = l2;
        }
        delete head;
        return head->next;
    }
};