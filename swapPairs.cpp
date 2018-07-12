#include "solution.hpp"

ListNode* Solution::swapPairs(ListNode *head)
{
    if(head == nullptr || head->next == nullptr)
        return head;

    ListNode *first = head->next, *second = head, *dummy = new struct ListNode(0);
    dummy->next = head;
    head = dummy;

    while(first != nullptr)
    {
        ListNode *temp = first->next;
        dummy->next = first;
        second->next = first->next;
        first->next = second;

        dummy = second;
        second = temp;
        if(temp == nullptr || temp->next == nullptr)
            break;
        first = temp->next;
    }

    return head->next;
}