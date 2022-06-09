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
    ListNode* reverseList(ListNode* head) {
        // ITERATIVE 
        // ListNode *nextNode, *prevNode = NULL;
        // while (head!=NULL) {
        //     nextNode = head->next;
        //     head->next = prevNode;
        //     prevNode = head;
        //     head = nextNode;
        // }
        // return prevNode;
        
        
        
        // RECURSIVE IT WENT TO HEAD =4 CALL HEAD->NEXT->NEXT IS NULL CAREFULL WHILE RUNNING 
         if (head == NULL || head -> next == NULL) {
            return head;
        }
        // recursive call so passing all elements except first because in recursion we break            nodes as 1 and (n-1) and we handle 1 and recursion handles (n-1) part:
        ListNode* node = reverseList(head -> next);
        cout<<head->next->val;
        head -> next -> next = head;
        head -> next = NULL;
        return node;
    }
};