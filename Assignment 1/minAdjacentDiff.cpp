#include<bits/stdc++.h>

using namespace std;

int findMinDiff(int *d, int n, int k)
{
    deque<int> dq;
    int i = 0;
    while(i < k)
    {
        while(!dq.empty() && d[i] >= d[dq.back()])
            dq.pop_back();
        dq.push_back(i++);
    }
    int minDiff = INT_MAX;
    while(i < n)
    {
        minDiff = min(minDiff, d[dq.front()]);
        while(!dq.empty() && dq.front() <= i - k)
            dq.pop_front();
        while(!dq.empty() && d[i] >= d[dq.back()])
            dq.pop_back();
        dq.push_back(i++);
    }
    minDiff = min(minDiff, d[dq.front()]);

    return minDiff;
}

int minAdjacentDiff(int *a, int n, int k)
{
    int diff[n - 1];
    for(int i = 0 ; i < n - 1 ; i++)
        diff[i] = a[i + 1] - a[i];

    int minDiff = findMinDiff(diff, n - 1, n - k - 1);

    return minDiff;
}

int main()
{
    int a[] = {3, 7, 8, 10, 14};
    cout<<minAdjacentDiff(a, 5, 2);

    return 0;
}
