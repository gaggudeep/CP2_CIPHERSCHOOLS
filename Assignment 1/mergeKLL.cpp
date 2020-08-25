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

    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.size() == 0)
            return NULL;

        int nextList = 1, n = lists.size();
        while(nextList < n)
        {
            for(int i = 0 ; i < n - nextList ; i += nextList * 2)
            {
                lists[i] = merge2Lists(lists[i],lists[i + nextList]);
            }
            nextList *= 2;
        }

        return lists[0];
    }
