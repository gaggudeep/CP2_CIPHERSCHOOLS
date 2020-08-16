 #include<bits/stdc++.h>

 using namespace std;

 vector<int> smallerNumbersThanCurrent(vector<int>& nums)
 {
        int n = nums.size();
        vector<int> res(n);
        multimap<int, int> m;
        for(int i = 0 ; i < nums.size() ; i++)
            m.insert({nums[i], i});

        int j = 0, cnt = 0;
        res[m.begin()->second] = 0;
        int prev = m.begin()->first;

        for(auto i = ++m.begin() ; i != m.end() ; i++)
        {
            if(i->first != prev)
            {
                j += cnt + 1;
                cnt = 0;
            }
            else
                cnt++;
            res[i->second] = j;
            prev = i->first;
        }

        return res;
}

int main()
{
    vector<int> arr = {8,1,2,2,3};
    vector<int> r = smallerNumbersThanCurrent(arr);

    for(int i = 0 ; i < 5 ; i++)
        cout<<r[i]<<" ";

    return 0;
}
