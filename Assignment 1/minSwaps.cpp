#include<bits/stdc++.h>

using namespace std;

int minSwaps(int *a, int n, int k)
{
    int window = 0, bad = 0;
    for(int i = 0 ; i < n ; i++)
    {
        if(a[i] <= k)
            window++;
    }
    for(int i = 0 ; i < window ; i++)
    {
        if(a[i] > k)
            bad++;
    }
    int swaps = bad;
    for(int i = 0, j = window ; j < n ; i++, j++)
    {
        if(a[i] > k)
            --bad;
        if(a[j] > k)
            ++bad;

        swaps = min(swaps, bad);
    }

    return swaps;
}

int main()
{
    int a[] = {5,6,7,4,3};
    cout<<minSwaps(a, 5, 5);

    return 0;
}
