#include<bits/stdc++.h>

using namespace std;

void swastika(int r, int c)
{
    for(int i = 0 ; i < r ; i++)
    {
            if(i == 0)
            {
                cout<<"* ";
                for(int j = 0 ; j < c / 2 - 1 ; j++)
                    cout<<"  ";
                for(int j = 0 ; j <= c / 2 ; j++)
                    cout<<"* ";
                cout<<'\n';
            }
            else if(i < r / 2)
            {
                cout<<"* ";
                for(int j = 0 ; j < c / 2 - 1 ; j++)
                    cout<<"  ";
                cout<<"*\n";
            }
            else if(i == r / 2)
            {
                for(int j = 0 ; j < c ; j++)
                    cout<<"* ";
                cout<<'\n';
            }
            else if(i == r - 1)
            {
                for(int j = 0 ; j < c / 2 ; j++)
                    cout<<"* ";
                cout<<'*';
                for(int j = 0 ; j < c / 2 - 1 ; j++)
                    cout<<"  ";
                cout<<" *";
            }
            else
            {
                for(int j = 0 ; j < c / 2 ; j++)
                    cout<<"  ";
                cout<<'*';
                for(int j = 0 ; j < c / 2 - 1 ; j++)
                    cout<<"  ";
                cout<<" *\n";
            }
    }
}

int main()
{
    swastika(11, 11);

    return 0;
}
