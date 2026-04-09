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
        if(!list1)return list2;
        if(!list2)return list1;
        ListNode *l1p = list1, *l2p = list2;
        ListNode *curr = nullptr, *head = nullptr;
        //curr = (l1p->val <= l2p->val)?curr=list1:curr=list2;
        if(l1p->val <= l2p->val)
        {
            curr = list1;
            l1p = l1p->next;
        }
        else
        {
            curr = list2;
            l2p = l2p->next;
        }
        head = curr;
        //sorting
        while(l1p!=nullptr&&l2p!=nullptr)
        {
            if(l1p->val<=l2p->val)
            {
                curr->next = l1p;
                curr = l1p;
                l1p = l1p->next;
                cout<<"l1p won:"<<curr->val<<endl;
            }
            else
            {
                curr->next = l2p;
                curr = l2p;
                l2p = l2p->next;
                cout<<"l2p won:"<<curr->val<<endl;
            }
        }
        if(l1p) curr->next = l1p;
        if(l2p) curr->next = l2p;
        return head;
    }
};
