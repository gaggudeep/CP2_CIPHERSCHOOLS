#include<bits/stdc++.h>

using namespace std;

void rightTriangle(int n)
{
    for(int i = 0 ; i < 5 ; i++)
    {
        for(int j = 0 ; j <= i ; j++)
            cout<<"* ";
        cout<<'\n';
    }
}

void mirroredRightTriangle(int n)
{
    for(int i = 0 ; i < n ; i++)
    {
        for(int j = n - 1 - i ; j > 0 ; j--)
            cout<<"  ";
        for(int j = 0 ; j <= i ; j++)
            cout<<"* ";
        cout<<endl;
    }
}

void pyramid(int n)
{
    for(int i = 0 ; i < n ; i++)
    {
       for(int j = n - 1 - i ; j > 0 ; j--)
        cout<<" ";
       for(int j = 0 ; j <= i ; j++)
        cout<<"* ";
       cout<<endl;
    }
}

void rowNumberTriangle(int n)
{
    for(int i = 0 ; i < 5 ; i++)
    {
        for(int j = 0 ; j <= i ; j++)
            cout<<j + 1<<" ";
        cout<<'\n';
    }
}


void numberTriangle(int n)
{
    int num = 1;
    for(int i = 0 ; i < 5 ; i++)
    {
        for(int j = 0 ; j <= i ; j++)
            cout<<num++<<" ";
        cout<<'\n';
    }
}

int main()
{
    rightTriangle(5);
    mirroredRightTriangle(5);
    pyramid(5);
    rowNumberTriangle(5);
    numberTriangle(5);

    return 0;
}
