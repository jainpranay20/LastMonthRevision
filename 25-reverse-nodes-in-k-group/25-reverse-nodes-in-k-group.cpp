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
    ListNode* reverseKGroup(ListNode* head, int k) {
        // time complexity O(n) auxiliary space o(n/k)
        ListNode* cursor = head;
        for(int i = 0; i < k; i++){
            if(cursor == nullptr) return head;
            cursor = cursor->next;
        }
        if(!head)
            return nullptr;
        int count=0;
        ListNode *curr=head;
        ListNode *prev=nullptr;
        ListNode *next=NULL;
        while(curr!=NULL && count<k)
        {
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
            count++;
        }
        ListNode *cp=next;
        if(next!=nullptr) head->next=reverseKGroup(next,k);
        return prev;
    }
};