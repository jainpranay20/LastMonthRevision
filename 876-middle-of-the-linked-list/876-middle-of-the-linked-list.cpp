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
    ListNode* middleNode(ListNode* head) {
        // SLOW AND FAST POINTER APPROACH
        ListNode *slow,*fast;
        slow=head;
        fast=head;
        // MOST IMPORTANT or nahi ayega because it will occur null pointer exception rememeber 
        while(fast!=NULL and fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
        
        
        
        // O(n) approach 
        // ListNode *temp=head;
        // int count=0;
        // while(head!=NULL)
        // {
        //     head=head->next;
        //     count++;
        // } 
        // int mid=count/2;
        // int x=0;
        // while(x!=mid)
        // {
        //     if(temp->next!=NULL)
        //     temp=temp->next;
        //     x++;
        // }
        // return temp;
    }
};