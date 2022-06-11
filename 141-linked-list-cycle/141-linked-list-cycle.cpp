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
    bool hasCycle(ListNode *head) {
        ListNode *slowptr=head;
        if(slowptr==NULL || slowptr->next==NULL)
            return false;
        ListNode *fastptr=head->next;
        while(slowptr!=fastptr && fastptr!=NULL && fastptr->next!=NULL)
        {
            slowptr=slowptr->next;
            fastptr=fastptr->next->next;
        }
        if(slowptr==fastptr)
            return true;
        else
            return false;
    }
};