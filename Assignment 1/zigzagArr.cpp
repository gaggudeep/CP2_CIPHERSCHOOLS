#include<bits/stdc++.h>

using namespace std;

int zigzag(int *a, int n)
{
    int evenOp = 0, oddOp = 0;
    for(int i = 0 ; i < n ; i++)
    {
        int smaller = min(i > 0 ? a[i - 1] : INT_MAX, i + 1 < n ? a[i + 1]: INT_MAX);
        if(smaller <= a[i])
        {
            if(i % 2 == 0)
                evenOp++;
            else
                oddOp++;
        }
    }

    return min(evenOp, oddOp);
}

int main()
{
    int a[] = {2, 2, 4, 5, 3};
    cout<<zigzag(a, 5)<<endl;

    return 0;
}
