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
        // its a very nice concept here we are making a ring
        // then break the ring
         if(head==NULL || head->next==NULL)
            return head;
        ListNode *curr=head;
        int count=1;
        while(curr->next!=NULL)
        {
            count++;
            curr=curr->next;
        }
        curr->next=head;
        
        for (int i = 0; i < count - (k % count); ++i) {
             curr=curr->next;
        }
        head=curr->next;
        curr->next=NULL;
        return head;
        
        
        
        // some faluts int this code
//         ListNode *curr=head;
//         if(head==NULL || head->next==NULL)
//             return head;
//          if(k==0)
//             return head;
//         int count=0;
//         while(curr!=NULL)
//         {
//             count++;
//             curr=curr->next;
//         }
       
//         curr=head;
//         int n=k%count;
//         while(n--)
//         {
//             curr=curr->next;
//         }
//         ListNode *nxt=curr->next;
//         ListNode *prev=curr->next;
//         curr->next=NULL;
//         while(nxt->next!=NULL)
//         {
//             nxt=nxt->next;
//         }
//         nxt->next=head;
//         return prev;
    }
};