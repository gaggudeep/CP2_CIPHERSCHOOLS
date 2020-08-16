#include<bits/stdc++.h>

using namespace std;

vector<vector<int>> generate(int numRows)
{
        vector<vector<int>> res;
        if(numRows == 0)
            return res;
        res.push_back({1});

        for(int i = 1 ; i < numRows ; i++)
        {
            vector<int> prev = res[i - 1], temp = {1};
            for(int j = 1 ; j < i ; j++)
            {
                temp.push_back(prev[j - 1] + prev[j]);
            }
            temp.push_back(1);
            res.push_back(temp);
        }

        return res;
}

int main()
{
    vector<vector<int>> p = generate(5);
    for(auto i : p)
    {
            for(auto j : i)
                cout<<j<<" ";
            cout<<endl;
    }

    return 0;
}
