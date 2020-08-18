#include<bits/stdc++.h>

using namespace std;

int largestRectangleArea(vector<int>& hist)
{

        stack<int> s;
        int maxArea = 0, top, area, i = 0;
        while(i < hist.size())
        {
            if(s.empty() || hist[s.top()] <= hist[i])
                s.push(i++);
            else
            {
                top = s.top();
                s.pop();
                area = hist[top] * (s.empty() ? i : i - s.top() - 1);
                maxArea = max(area, maxArea);
            }
        }
        while(!s.empty())
        {
            top = s.top();
            s.pop();
            area = hist[top] * (s.empty() ? i : i - s.top() - 1);
            maxArea = max(maxArea, area);
        }

        return maxArea;
}
