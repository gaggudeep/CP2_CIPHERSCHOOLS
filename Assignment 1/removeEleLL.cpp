ListNode *removeElements(ListNode *head, int val)
{
    ListNode *list = head;

    while (list != nullptr)
    {
        if (list->val == val)
        {
            list = list->next;
        }
        else
        {
            list = list->next;
        }
    }

    return head;
}
