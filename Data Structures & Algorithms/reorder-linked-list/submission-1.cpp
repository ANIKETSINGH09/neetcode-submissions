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
    void reorderList(ListNode* head) {
       ListNode *slow=head;
       ListNode *fast=head->next;

       while(fast!=NULL && fast->next!=NULL)
       {
        slow=slow->next;
        fast=fast->next->next;
       } 

        ListNode *curr=slow->next;
        slow->next=NULL;
        ListNode *prev=NULL;
        while(curr!=NULL)
        {
            ListNode *nxt=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nxt;
        }
        

        ListNode* temp=head;
        curr=prev;

        while(curr!=NULL)
        {
            ListNode* temp1=temp->next;
            ListNode* temp2=curr->next;

            temp->next=curr;
            curr->next=temp1;

            temp=temp1;
            curr=temp2;
        }

    }
};
