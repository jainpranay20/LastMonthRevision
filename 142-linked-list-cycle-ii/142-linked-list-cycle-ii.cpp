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
    ListNode *detectCycle(ListNode *head) {
        // floyd cycle detection
        if(head == NULL)
            return head;
            ListNode *fast = head;
            ListNode *slow = head;
            while(fast != NULL && fast ->next != NULL)
            {
                fast = fast->next->next;
                slow = slow->next;
                if(fast == slow)
                {
                    slow=head;
                    while(slow!=fast)
                    {
                         slow=slow->next;
                         fast=fast->next;
                    }
                    return slow;
                } 
            }
            return NULL;
        
        
        // not optimised
        // ListNode* slowptr=head;
        // ListNode* fastptr=head->next;
        // while(slowptr!=fastptr)
        // {
        //     slowptr=slowptr->next;
        //     fastptr=fastptr->next->next;
        // }
        // slowptr=head;
        // int count=0;
        // while(slowptr!=fastptr)
        // {
        //     slowptr=slowptr->next;
        //     fastptr=fastptr->next;
        //     count++;
        // }
        // return slowptr;
    }
};