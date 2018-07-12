#include "solution.hpp"

RandomListNode* Solution::copyRandomList(RandomListNode *head)
{
    RandomListNode *copy;
    map<RandomListNode*, RandomListNode*> m;
    RandomListNode *dummy = new RandomListNode(0);
    copy = dummy;
    RandomListNode *curr = head;
    while(curr != nullptr)
    {
        copy->next = new RandomListNode(curr->label); 
        copy = copy->next;
        m[curr] = copy;
        curr = curr->next;
    }
    curr = head;
    copy = dummy->next;
    while(curr != nullptr)
    {
        if(curr->random == nullptr)
            copy->random =  nullptr;
        else
            copy->random = m[curr->random];
        curr = curr->next;
        copy = copy->next;
    }
    return dummy->next;
}