#include<bits/stdc++.h>

using namespace std;

ListNode* deleteDuplicates(ListNode* head) 
{
    if(head == NULL)
        return head;
    ListNode *n = head->next, *prev = head;
    while(n != NULL)
    {
        if(prev->val == n->val)
        {
            prev->next = n->next;
        }
        else
            prev = n;
        n = n->next;
    }
    
    return head;
}