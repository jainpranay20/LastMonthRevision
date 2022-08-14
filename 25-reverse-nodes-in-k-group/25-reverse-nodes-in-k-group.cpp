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
   // ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode *reverse(ListNode* head,int k,int count1)
    {
        if(count1<k)
            return head;
        ListNode *curr=head;int count=0;
        ListNode *prev=nullptr,*nxt=nullptr;
        while(curr!=nullptr and count<k)
        {
            nxt=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nxt;
            count++;
        }
        if(nxt!=nullptr)
        head->next=reverse(curr,k,count1-k);
        return prev;
    }
        
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode *curr=head;
        int count1=0;
        while(curr!=NULL)
        {
            count1++;
            curr=curr->next;
        }
        curr=head;
        return reverse(head,k,count1);
    }
    
};