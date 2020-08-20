#include<bits/stdc++.h>

using namespace std;

struct Node
{
    int val;
    Node *next;
    Node(int v) : val(v), next(NULL) {}
};

bool detectCycle(Node *head)
{
    Node *slow = head, *fast = head;
    while(fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast)
            return true;
    }

    return false;
}

int main()
{
    Node *head = new Node(3);
    head->next = new Node(2);
    head->next->next = new Node(0);
    head->next->next->next = head->next;

    cout<<detectCycle(head);

    return 0;
}
