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
        int lengthofll(ListNode* head){
        int cnt=0;
        while(head != nullptr){
            cnt++;
            head = head->next;
        }
        return cnt;
    }
    
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(!head || !head->next || k == 1) return head; 
        int n = lengthofll(head);
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode* pre = dummy;
        ListNode* curr;
        ListNode* nex;
        while(n >= k){
            curr = pre->next;
            nex = curr->next;
            for(int i=1;i < k;i++){
                curr->next = nex->next;
                nex->next = pre->next;
                pre->next = nex;
                nex = curr->next;
            }
            pre = curr;
            n = n-k;
        }
        return dummy->next;
    }
        // time complexity O(n) auxiliary space o(n/k)
    //     ListNode* cursor = head;
    //     for(int i = 0; i < k; i++){
    //         if(cursor == nullptr) return head;
    //         cursor = cursor->next;
    //     }
    //     if(!head)
    //         return nullptr;
    //     int count=0;
    //     ListNode *curr=head;
    //     ListNode *prev=nullptr;
    //     ListNode *next=NULL;
    //     while(curr!=NULL && count<k)
    //     {
    //         next=curr->next;
    //         curr->next=prev;
    //         prev=curr;
    //         curr=next;
    //         count++;
    //     }
    //     ListNode *cp=next;
    //     if(next!=nullptr) head->next=reverseKGroup(next,k);
    //     return prev;
    // }
};