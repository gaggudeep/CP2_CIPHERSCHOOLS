#include<bits/stdc++.h>

using namespace std;

string minWindowSubstr(string s, string t)
{
    unordered_map<char, int> freq;
    for(char c : t)
        freq[c]--;
    int beg = 0, last = 0, head = 0, subLen = INT_MAX, reqd = t.size();
    while(last < s.size())
    {
        if(freq.find(s[last]) != freq.end() && freq[s[last]]++ < 0)
        {
            reqd--;
        }
        last++;
        while(reqd == 0)
        {
            if(last - beg < subLen)
                subLen = last - (head = beg);
            if(freq.find(s[beg]) != freq.end() && freq[s[beg]]-- <= 0)
            {
                reqd++;
            }
            beg++;
        }
    }

    return subLen == INT_MAX ? "" : s.substr(head, subLen);
}

int main()
{
    string s = "abc", t = "b";
    cout<<minWindowSubstr(s, t);

    return 0;
}
