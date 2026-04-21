/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        map<Node*,Node*> table;
        Node* curr = head;
        while(curr!=nullptr)
        {
            Node* newList = new Node(curr->val);
            table[curr]=newList;
            curr = curr->next;
        }
        for(const auto &i:table)
        {
            i.second->next = i.first->next ? table[i.first->next]:nullptr;
            i.second->random = i.first->random ? table[i.first->random]:nullptr;
        }
        curr = head;
        Node* head1 = table[curr];
        return head1;
    }
};
