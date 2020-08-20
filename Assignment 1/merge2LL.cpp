ListNode* merge2Lists(ListNode *l1, ListNode *l2)
{
        if(l1 == NULL)
            return l2;
        if(l2 == NULL)
            return l1;

        ListNode *dummyHead = new ListNode();
        ListNode *dummy = dummyHead;
        while(l1 != NULL && l2 != NULL)
        {
            if(l1->val < l2->val)
            {
                dummy->next = l1;
                l1 = l1->next;
            }
            else
            {
                dummy->next = l2;
                l2 = l2->next;
            }
            dummy = dummy->next;
        }
        while(l1 != NULL)
        {
            dummy->next = l1;
            dummy = dummy->next;
            l1 = l1->next;
        }
        while(l2 != NULL)
        {
            dummy->next = l2;
            dummy = dummy->next;
            l2 = l2->next;
        }

        return dummyHead->next;
}
