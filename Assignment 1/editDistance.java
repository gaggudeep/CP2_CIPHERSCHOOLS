int minDistance(string word1, string word2) {
        int dp[2][word2.size() + 1];
    
        for(int i = 0 ; i <= word1.size() ; i++)
        {
            for(int j = 0 ; j <= word2.size() ; j++)
            {
                if(i == 0)
                    dp[i][j] = j;
                else if(j == 0)
                    dp[i % 2][j] = i;
                else if(word1[i - 1] == word2[j - 1])
                    dp[i % 2][j] = dp[(i - 1) % 2][j - 1];
                else
                    dp[i % 2][j] = 1 + min(dp[i % 2][j - 1], min(dp[(i - 1) % 2][j - 1], dp[(i - 1) % 2][j]));
            }
        }
        
        return dp[word1.size() % 2][word2.size()];
    }