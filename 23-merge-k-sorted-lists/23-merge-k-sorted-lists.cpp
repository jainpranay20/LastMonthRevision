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
    ListNode* merge(ListNode* list1,ListNode *list2)
    {
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
    }
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.size()==0) return NULL;
        if(lists.size()==1) return lists[0];
        ListNode* ans=NULL;
        for(auto l : lists) 
        {
            ans = merge(ans,l);
        }
        return ans;
    }
};