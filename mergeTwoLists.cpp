#include "solution.hpp"

ListNode* Solution::mergeTwoLists(ListNode *l1, ListNode *l2)
{
    ListNode *merge = nullptr;
    if(l1 == nullptr)
        return l2;
    else if(l2 == nullptr)
        return l1;
    else if(l1->val <= l2->val)
    {
        merge = l1;
        l1 = l1->next;
    }
    else
    {
        merge = l2;
        l2 = l2->next;
    }
    ListNode *mergeHead = merge;

    while(l1 != nullptr && l2 != nullptr)
    {
        if(l1->val <= l2->val)
        {
            merge->next = l1;
            l1 = l1->next;
        }
        else
        {
            merge->next = l2;
            l2 = l2->next;
        }
        merge = merge->next;
    }
    
    if(l1 == nullptr)
        merge->next = l2;
    else
        merge->next = l1;

    return mergeHead;
}