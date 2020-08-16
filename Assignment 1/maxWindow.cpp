#include<bits/stdc++.h>

using namespace std;

vector<int> maxSlidingWindow(vector<int>& nums, int k)
{
    vector<int> windowSums;

    deque<int> q(k);
    int i = 0;
    while(i < k)
    {
        while(!q.empty() && nums[i] >= nums[q.back()])
            q.pop_back();
        q.push_back(i++);
    }
    while(i < nums.size())
    {
        windowSums.push_back(nums[q.front()]);
        while(!q.empty() && q.front() <= i - k)
            q.pop_front();
        while(!q.empty() && nums[i] >= nums[q.back()])
            q.pop_back();
        q.push_back(i++);
    }
    windowSums.push_back(nums[q.front()]);

    return windowSums;
}

int main()
{
    vector<int> v = {1,3,-1,-3,5,3,6,7};
    vector<int> b = maxSlidingWindow(v, 3);
    for(int a : b)
        cout<<a<<" ";

    return 0;
}
