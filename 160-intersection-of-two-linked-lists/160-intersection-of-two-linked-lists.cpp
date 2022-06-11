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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *a=headA;
        ListNode *b=headB;
        int count1=0,count2=0;
        while(a!=NULL)
        {
            count1++;
            a=a->next;
        }
        a=headA;
        while(b!=NULL)
        {
            count2++;
            b=b->next;
        }
        b=headB;
        while(count1>count2)
        {
            count1--;
            a=a->next;
        }
        //If second one is longer, we traverse it, till it becomes equal to length of first...
        while(count2>count1) {
            count2--;
            b=b->next;
        }
        
		//Since length of both is now equal, we traverse them together, and break if the nodes              become equal...
        // yaha p a aur b address naki value agar value hoti toh apan
        // a-> val aur b-> val se dekhte jo ki nahi h
        // nice one 
        while(a!=b) {
            a=a->next;
            b=b->next;
        }
    
        return a;
        
        // its a wrong solution 
        // stack<ListNode*> st1,st2;
        // while(headA!=NULL)
        // {
        //     st1.push(headA);
        //     headA=headA->next;
        // }
        //   while(headB!=NULL)
        // {
        //     st2.push(headB);
        //     headB=headB->next;
        // } 
        // int index=0;
        // ListNode *a;
        // while(st1.top()->val==st2.top()->val)
        // {
        //     a=st1.top();
        //     st1.pop();
        //     st2.pop();
        //     index++;
        // }
        // ListNode *temp=NULL;
        // if(index==0)
        //     return temp;
        // return a;
    }
};