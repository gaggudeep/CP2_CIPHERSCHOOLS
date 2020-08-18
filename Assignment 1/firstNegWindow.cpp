
}

int main()
{
    vector<int> a{-8,2,3,-6,10};
    firstNegWindow(a, 5, 2);

    return 0;
}
#include<bits/stdc++.h>

using namespace std;


void firstNegWindow(vector<int> a, int n, int k)
{
    int firstNeg = 0, i = 0;
    for(int i = k - 1 ; i < n ; i++)
    {
        while(firstNeg < i && (firstNeg <= i - k || a[firstNeg] > 0))
            firstNeg++;
        cout<<(a[firstNeg] < 0 ? a[firstNeg] : 0)<<" ";
    }
}

int main()
{
    vector<int> a{-8,2,3,-6,10};
    firstNegWindow(a, 5, 2);

    return 0;
}
