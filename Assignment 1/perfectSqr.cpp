#include<bits/stdc++.h>

using namespace std;

int perectSquares(int n)
{
    if(n <= 3)
        return 3;
    int dp[n + 1];
    dp[0] = 0; dp[1] = 1; dp[2] = 2; dp[3] = 3;

    for(int i = 4 ; i <= n ; i++)
    {
        dp[i] = i;
        for(int j = 1 ; j * j <= i ; j++)
        {
            int temp = j * j;
            dp[i] = min(dp[i], 1 + dp[i  - temp]);
        }
    }

    return dp[n];
}


int main()
{
    cout<<perectSquares(12);
}
