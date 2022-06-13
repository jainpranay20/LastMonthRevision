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
    ListNode* reverse(ListNode *head)
    {
        ListNode* prev=NULL;
        ListNode* curr=head,*nxt=NULL;
        while(curr!=NULL)
        {
            nxt=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nxt;
        }
        return prev;
        
    }
    bool isPalindrome(ListNode* head) {
        ListNode *slow=head;
        ListNode *fast=head,*mid,*count;
        while(fast->next!=NULL and fast->next->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        count=head;
        int total=0;
        while(count!=NULL)
        {
            total++;
            count=count->next;
        }
        slow->next=reverse(slow->next);
        slow=slow->next;
        
        while(slow!=NULL)
        {
            if(head->val!=slow->val)
                return false;
            head=head->next;
            slow=slow->next;
            
        }
       // return true;
        
        
        
        
//         ListNode *prevptr,*currptr,*nextptr;   
//         if(total%2==1)
//         {
//             slow=slow->next;
//             prevptr=slow;
//             nextptr=slow;
//             currptr=slow->next;
            
//             while(currptr!=NULL)
//             {
//                 nextptr=currptr->next;
//                 currptr->next=prevptr;
//                 prevptr=currptr;
//                 currptr=nextptr;
//             }
//         }
//         else if(total%2==0)
//         {
//             prevptr=slow;
//             currptr=slow->next;
//             nextptr=slow;
//             while(currptr!=NULL)
//             {
//                 nextptr=currptr->next;
//                 currptr->next=prevptr;
//                 prevptr=currptr;
//                 currptr=nextptr;
//             }
//         }
        
        
        
    return true;
    }
};