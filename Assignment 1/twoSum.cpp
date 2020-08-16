#include<bits/stdc++.h>

using namespace std;

vector<int> twoSum(int *a, int s, int n)
{
    map<int, int> m;
    for(int i = 0 ; i < s ; i++)
    {
        int complement = n - a[i];
        if(m.find(complement) != m.end())
        {
            return {m[complement], i};
        }
        else
        {
            m[a[i]] = i;
        }
    }

    return {};
}


int main()
{
    int a[] = {2,7,11,15};
    vector<int> r = twoSum(a, 4, 9);
    for(int i : r)
        cout<<i<<" ";
}
