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
    int listLength(ListNode* head)
    {
        int len=0;
        while(head!=nullptr)
        {
            len++;
            head = head->next;
        }
        return len;

    }
    ListNode* reverseList(ListNode* head)
    {
        ListNode *curr=head,*prev=nullptr,*next;
        while(curr!=nullptr)
        {
            next = curr->next;
            curr->next = prev;

            prev = curr;
            curr = next;
        }
        return prev;
    }
    ListNode* mergeList(ListNode* head1,ListNode* head2)
    {
        ListNode *curr1 = head1;
        ListNode *curr2 = head2;

        while (curr1 != NULL && curr2 != NULL)
        {
            ListNode *ptr1 = curr1->next;
            ListNode *ptr2 = curr2->next;

            curr2->next = curr1->next;
            curr1->next = curr2;

            curr1 = ptr1;
            curr2 = ptr2;
        }
        return head1;
    }    
    void reorderList(ListNode* head) {
        ListNode *slow = head;
        int length = listLength(slow);

        if(length%2!=0)length = (length/2)+1;
        else length = length/2;

        ListNode *fast = head;
        int i=1;
        while(i<length)
        {
            slow = slow->next;
            fast = fast->next;
            i++;
        }
        fast = fast->next;
        slow->next = nullptr;
        ListNode *reverse = reverseList(fast);

        slow = head;
        head = mergeList(slow,reverse);

    }
};
