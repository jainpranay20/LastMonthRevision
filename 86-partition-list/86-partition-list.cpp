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
    ListNode* partition(ListNode* head, int x) {
        ListNode* dummy1=new ListNode(0);
        ListNode* dummy4=dummy1;
        ListNode* dummy2=new ListNode(0);
        ListNode* dummy6=dummy2;
        ListNode* temp=head;
        while(temp!=NULL)
        {
            if(temp->val<x)
            {
                ListNode* dummy3=new ListNode(temp->val);
                dummy1->next=dummy3;
                dummy1=dummy3;
            }
            if(temp->val>=x)
            {
                ListNode* dummy5=new ListNode(temp->val);
                dummy2->next=dummy5;
                dummy2=dummy5;
            }
            temp=temp->next;
        }
        dummy1->next=dummy6->next;
        
        return dummy4->next;
    }
};