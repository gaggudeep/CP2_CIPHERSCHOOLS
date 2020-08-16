#include<bits/stdc++.h>

using namespace std;

vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies)
{

        vector<bool> kids(candies.size());
        int maxC = 0;
        for(int i = 0 ; i < candies.size() ; i++)
        {
            maxC = max(maxC, candies[i]);
        }
        for(int i = 0 ; i < candies.size() ; i++)
        {
            if(candies[i] + extraCandies >= maxC)
                kids[i] = true;
            else
                kids[i] = false;
        }

        return kids;
}

int main()
{
    vector<int> v = {2,3,5,1,3};
    vector<bool> b = kidsWithCandies(v, 3);
    for(bool a : b)
        cout<<a<<" ";

    return 0;
}
