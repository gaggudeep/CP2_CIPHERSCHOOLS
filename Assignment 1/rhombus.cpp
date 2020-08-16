#include<bits/stdc++.h>

using namespace std;

void solidRhombus(int n)
{
    for(int i = 0 ; i < n ; i++)
    {
        for(int j = n - 1 - i ; j >= 0 ; j--)
            cout<<' ';
        for(int j = 0 ; j < n ; j++)
            cout<<'*';
        cout<<'\n';
    }
}

void hollowRhombus(int n)
{
    for(int i = 0 ; i < n ; i++)
    {
        for(int j = n - 1 - i ; j >= 0 ; j--)
            cout<<' ';
        if(i == 0 || i == n - 1)
        {
            for(int j = 0 ; j < n ; j++)
            cout<<'*';
        }
        else
        {
            cout<<'*';
            for(int j = 0 ; j < n - 2 ; j++)
                cout<<' ';
            cout<<'*';
        }
        cout<<'\n';
    }
}

int main()
{
    solidRhombus(5);
    hollowRhombus(5);

    return 0;
}
