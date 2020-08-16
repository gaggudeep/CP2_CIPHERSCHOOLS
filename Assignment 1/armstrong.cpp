#include<iostream>
#include<math.h>

using namespace std;

int nobLen(int n)
{
    int len = 0;
    while(n > 0)
    {
            len++;
            n /= 10;
    }

    return len;
}

string isArmstrong(int n)
{
    int len = nobLen(n);
    int t = n, digSum = 0;
    while(t > 0)
    {
        digSum += ceil(pow(t % 10, len));
        t /= 10;
    }

    return (n == digSum) ? "Yes" : "No";
}

int main()
{
    int n;
    cin>>n;

    cout<<isArmstrong(n);

    return 0;
}
