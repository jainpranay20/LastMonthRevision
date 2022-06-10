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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        //BruteForce Method
      //Time Complexity :- O(n) + O(n) = O(2*n) [Two Pass]
      //Space Complexity:- O(1)
       
      //Counting the number of nodes in the linked list.       
      ListNode *temp=head;
      int countNodes=0;
      while(temp!=NULL)
      {
          countNodes++;
          temp=temp->next;
      }
        
      //Checking the edge case when the 'n' i.e. node to be deleted
      //from end of the list is equal to the number of nodes in the 
      //linked list.
      /*For Example :- 
                       Input : [7,4] , n=2
                       Output: [4]
      */
      if(countNodes==n)
      {
          ListNode *node=head;
          head=head->next;
          delete node;
          return head;
      }
        
      //If the node to be deleted is not the head of the list then we have 
      //to reach one node before it.         
      int difference = countNodes - n;
      int counter=1;
      temp=head;
      while(counter!=difference)
      {
          counter++;
          temp=temp->next;
      }
        
      //The main logic to delete the nth node from the end.       
      ListNode *node=temp->next;
      temp->next=node->next;
      delete node;
        
      return head;
    
        
        
        
        // ListNode* curr=head;
        // int count=0;
        // while(!curr)
        // {
        //     count++;
        //     curr=curr->next;
        // }
        // if(count==n)
        // {
        //     ListNode* temp=head;
        //     temp=temp->next;
        //     delete head;
        //     return temp;
        // }
        // int diff=count-n;
        // int curr_count=1;
        // ListNode* temp=head;
        // while(curr_count!=diff)
        // {
        //     curr_count++;
        //     temp=temp->next;
        // }
        // ListNode* node=temp;
        // node=temp->next;
        // temp->next=node->next;
        // delete node;
        // return head;
      
    }
};