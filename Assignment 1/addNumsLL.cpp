ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int sum = 0, carry = 0;
        struct ListNode *dummyHead = new ListNode(0), *curr = dummyHead;
        dummyHead->next = curr;
        while( l1 != NULL || l2 != NULL)
        {
            int x = ( l1 != NULL) ? l1->val : 0;
            int y = ( l2 != NULL) ? l2->val : 0;
            if(l1 != NULL)
                l1 = l1->next;
            if(l2 != NULL)
                l2 = l2->next;
            sum = carry + x + y;
            carry = sum / 10;
            curr->next = new ListNode(sum % 10);
            curr = curr->next;
        }
        if(carry > 0)
        {
            curr->next = new ListNode(carry);
        }
        return dummyHead->next;
    }
