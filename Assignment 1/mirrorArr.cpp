#include<bits/stdc++.h>

using namespace std;

bool isMirror(int *a, int n)
{
    for(int i = 0 ; i < n ; i++)
    {
        if(i != a[a[i]])
            return false;
    }

    return true;
}

int main()
{
    int a[] = {3, 4, 2, 0, 1};
    cout<<isMirror(a, 5);

    return 0;
}
