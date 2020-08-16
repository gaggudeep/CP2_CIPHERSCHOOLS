#include<bits/stdc++.h>

using namespace std;

int binaryToDecimal(int b)
{
    int nob = 0, exp = 0;
    while(b > 0)
    {
        if(b % 10 == 1)
        {
            nob += pow(2, exp);
        }
        exp++;
        b /= 10;

    }

    return nob;
}

int main()
{
    cout<<binaryToDecimal(100001);

    return 0;
}
