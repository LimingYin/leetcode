#include "solution.hpp"

ListNode* Solution::removeNthFromEnd(ListNode* head, int n)
{
    struct ListNode dummy(0); // dummy node
    struct ListNode *first = head, *second = &dummy; 
    second->next = head;

    while(n-- > 0 && first != nullptr) // advance first pointer n position
        first = first->next;

    while(first != nullptr) // advance both pointer until fitst reach the end
    {
        first = first->next;
        second = second->next;
    }

    if(second != nullptr && second->next != nullptr) // delete second->next node
    {    
        ListNode *temp = second->next->next;
        if(second->next == head)
            head = second->next->next;
            
        delete second->next;
        second->next = temp;
    }

    return head;
}