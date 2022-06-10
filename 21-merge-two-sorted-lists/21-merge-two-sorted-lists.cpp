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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        // RECURSIVE
		// if(list1 == NULL){
		// 	return list2;
		// }
		// if(list2 == NULL){
		// 	return list1;
		// }        
		// if(list1->val < list2->val){
		// 	list1->next = mergeTwoLists(list1->next, list2);
		// 	return list1;
		// }
		// else{
		// 	list2->next = mergeTwoLists(list1, list2->next);
		// 	return list2;            
		// }
        
        
        
        //ITERATIVE WITHOUT SPACE
        if(list1==nullptr)
            return list2;
        if(list2==nullptr)
            return list1;
        ListNode *ptr;
        if(list1->val < list2-> val)
        {
            ptr=list1;
            list1=list1->next;  
        }
        else{
            ptr=list2;
            list2=list2->next;
        }
        ListNode *curr=ptr;
        while(list1 && list2)
        {
            if(list1->val > list2->val)
            {
                curr->next=list2;
                list2=list2->next;
            }
            else{
                curr->next=list1;
                list1=list1->next;
            }
            curr=curr->next;
        }
        if(!list1)
            curr->next=list2;
        else
            curr->next=list1;
            
        return ptr;
        
        
        
        // ITERATIVE APPROACH INPLACE
        // using dummy node TC O( N1 + N2 ) SPACE O( N1 + N2)
        // brute force approach using an extra linklist 
        // like we use to do in sorted arrays
//         ListNode* temp1=list1, *temp2=list2;
//         ListNode* list3=new ListNode();
//         ListNode* temp3 = list3;
//         while(temp1 && temp2)
//         {
//             if(temp1->val <= temp2->val)
//             {
//                 temp3->next=new ListNode(temp1->val);
//                 temp1=temp1->next;
//                 temp3=temp3->next;
//             }    
//             else
//             {
//                 temp3->next=new ListNode(temp2->val);
//                 temp2=temp2->next;
//                 temp3=temp3->next;
//             }
//         }
        
//         while(temp1)
//         {
//             temp3->next=new ListNode(temp1->val);
//             temp1=temp1->next;
//             temp3=temp3->next;
//         }
        
//         while(temp2)
//         {
//             temp3->next=new ListNode(temp2->val);
//             temp2=temp2->next;
//             temp3=temp3->next;
//         } 
//         return list3->next;
        
        
        
 
        // it will just connect 2 linked list 1 with second not correct approach
        // ListNode* temp=list1;
        // while(temp!=NULL and temp->next!=NULL)
        // {
        //     temp=temp->next;
        // }
        // temp->next=list2;
        // return list1; 
        
        
        
    }
};