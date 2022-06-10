/**
 *Definition for singly-linked list.
 *struct ListNode {
 *    int val;
 *    ListNode * next;
 *    ListNode() : val(0), next(nullptr) {}
 *    ListNode(int x) : val(x), next(nullptr) {}
 *    ListNode(int x, ListNode *next) : val(x), next(next) {}
 *};
 */
class Solution{
    public:
        ListNode* removeNthFromEnd(ListNode *head, int n){
//            	//BruteForce Method
//            	//Time Complexity :- O(n) + O(n) = O(2*n)[Two Pass]
//            	//Space Complexity:- O(1)

//            	//Counting the number of nodes in the linked list.       
//             ListNode *temp = head;
//             int countNodes = 0;
//             while (temp != NULL)
//             {
//                 countNodes++;
//                 temp = temp->next;
//             }

//            	//Checking the edge case when the 'n' i.e. node to be deleted
//            	//from end of the list is equal to the number of nodes in the 
//            	//linked list.
//             /*For Example :- 
//                              Input :[7,4], n=2
//                              Output:[4]
//             */
//             if (countNodes == n)
//             {
//                 ListNode *node = head;
//                 head = head->next;
//                 delete node;
//                 return head;
//             }

//            	//If the node to be deleted is not the head of the list then we have 
//            	//to reach one node before it.         
//             int difference = countNodes - n;
//             int counter = 1;
//             temp = head;
//             while (counter != difference)
//             {
//                 counter++;
//                 temp = temp->next;
//             }

//            	//The main logic to delete the nth node from the end.       
//             ListNode *node = temp->next;
//             temp->next = node->next;
//             delete node;

//             return head;
            //Optimised Method
    //Time Complexity:- O(n) [One Pass]
    //Space Complexity:-O(1)
        
    //Let's keep a fast pointer and will traverse it over the list
    //till it reaches one node before the node to be deleted.     
        ListNode *fast=head;
        for(int i=0;i<n;i++)
            fast=fast->next;
    //If fast would have reached NULL this means the node to be deleted 
    //is equal to the number of nodes in the linked list.   
        if(fast==NULL)
        {
            ListNode *node=head;
            head=head->next;
            delete node;
            return head;
        }
    //And if not the above case, then let's keep a slow pointer which is 
    //assigned head. Now, move both slow and fast pointer simultaneously
    //till the fast pointer reaches the last node. Here,you will observe 
    //that slow pointer is standing one node before the node to be 
    //deleted.       
        ListNode *slow=head;
        while(fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next;
        }
    //Simply delete the nth node from the end of the list.         
        ListNode *node=slow->next;
        slow->next=node->next;
        delete node;
        
    return head;
            
    ////https://leetcode.com/problems/remove-nth-node-from-end-of-list/discuss/1164537/Short-and-Simple-One-Pass-Solution-w-Explanation-or-Beats-100-or-No-dummy-node-required!

        }
};