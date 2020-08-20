vector<string> letterCombinations(string digits)
{

        if(digits.length() == 0)
            return {};

        unordered_map<char, vector<string>> digAl;
        digAl['2'] = {"a", "b", "c"};
        digAl['3'] = {"d", "e", "f"};
        digAl['4'] = {"g", "h", "i"};
        digAl['5'] = {"j", "k", "l"};
        digAl['6'] = {"m", "n", "o"};
        digAl['7'] = {"p", "q", "r", "s"};
        digAl['8'] = {"t", "u", "v"};
        digAl['9'] = {"w", "x", "y", "z"};

        queue<string> q;
        q.push("");
        while(q.front().length() != digits.length())
        {
            string s = q.front();
            q.pop();
            for(string a : digAl[digits[s.length()]])
            {
                q.push(s + a);
            }
        }
        vector<string> res;
        while(!q.empty())
        {
            res.push_back(q.front());
            q.pop();
        }

        return res;
    }
