#include "solution.hpp"

ListNode* Solution::rotateRight(ListNode* head, int k)
{
    if(k == 0 || head == nullptr)
        return head;
    ListNode *pHead = head, *pEnd = head;

    size_t len = 0;
    while(pEnd != nullptr)
    {
        pEnd = pEnd->next;
        ++len;
    }
    k = k % len;

    pEnd = head;
    for(size_t i = 0; i < k; ++i)
        pEnd = pEnd->next;
    
    while(pEnd->next != nullptr)
    {
        pHead = pHead->next;
        pEnd = pEnd->next;
    }

    pEnd->next = head;
    head = pHead->next;  
    pHead->next = nullptr;

    return head;
}