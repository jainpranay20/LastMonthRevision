/**
 *Definition for singly-linked list.
 *struct ListNode {
 *    int val;
 *    ListNode * next;
 *    ListNode(int x) : val(x), next(NULL) {}
 *};
 */
class Solution{
    public:
        bool hasCycle(ListNode *head){
            // o(n) time complexity O(n) space
            unordered_set<ListNode*> st;
            while (head != NULL)
            {
                if (st.find(head) != st.end()) return true;
                st.insert(head);
                head = head->next;
            }
            return false;
            
            // optimised approach
            // if(head == NULL)
            // return false;
            // ListNode *fast = head;
            // ListNode *slow = head;
            // while(fast != NULL && fast ->next != NULL)
            // {
            //     fast = fast->next->next;
            //     slow = slow->next;
            //     if(fast == slow)
            //         return true;
            // }
            // return false;
            

           	// unoptimised code
            // ListNode *slowptr = head;
            // if (slowptr == NULL || slowptr->next == NULL)
            //     return false;
            // ListNode *fastptr = head->next;
            // while (slowptr != fastptr && fastptr != NULL && fastptr->next != NULL)
            // {
            //     slowptr = slowptr->next;
            //     fastptr = fastptr->next->next;
            // }
            // if (slowptr == fastptr)
            //     return true;
            // else
            //     return false;
        }
};