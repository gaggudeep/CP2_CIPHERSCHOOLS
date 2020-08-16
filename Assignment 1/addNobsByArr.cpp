#include<bits/stdc++.h>

using namespace std;

int sumArr(int *a, int g, int *b, int s)
{
    vector<int> sum;
    int i = g - 1, j = s - 1, carry = 0;;
    while(j >= 0)
    {
        int stepSum = a[i--] + b[j--] + carry;
        sum.push_back(stepSum % 10);
        carry = stepSum / 10;
    }
    while(i >= 0)
    {
        int stepSum = a[i--] + carry;
        sum.push_back(stepSum % 10);
        carry = stepSum / 10;
    }
    int sumInt = 0;
    for(int i = sum.size() - 1 ; i >= 0 ; i--)
    {
        sumInt = sumInt * 10 + sum[i];
    }

    return sumInt;
}

int addNobsByArr(int *a, int m, int *b, int n)
{
    int sum;
    if(m > n)
        sum = sumArr(a, m, b, n);
    else
        sum = sumArr(b, n, a, m);

    return sum;
}

int main()
{
    int a[] = {9,5,4,9, 9, 9,9, 9};
    int b[] = {2,1,4};
    cout<<addNobsByArr(a, 8, b, 3);

    return 0;
}
