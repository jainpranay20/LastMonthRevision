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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        //Time Complexity O(max(N, M)) where N is length of l1 & M is length of l2
        //Space Complexity O(max(N,M))
        ListNode *dummy=new ListNode(0);
        ListNode *curr=dummy;
        int carry=0;
        while(l1!=NULL || l2!=NULL ||carry==1)
        {
            int sum=0;
            if(l1!=nullptr)
            {
                sum=sum+l1->val;
                l1=l1->next;
            }
            if(l2!=nullptr)
            {
                sum=sum+l2->val;
                l2=l2->next;
            }
            sum=sum+carry;
            carry=sum/10;
            ListNode *node=new ListNode(sum%10);
            curr->next=node;
            curr=curr->next;
        }
        return dummy->next;
    }
};