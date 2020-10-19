long long int solve()
{
    int n;
    cin >> n;

    if (n == 0)
        return 0;

    vector<vector<int>> mat(n, vector<int>(n, 0));
    vector<vector<int>> dp(n, vector<int>(n, 0));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> mat[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == 0 or j == 0)
                dp[i][j] = mat[i][j];
            else
                dp[i][j] = mat[i][j] + dp[i - 1][j - 1];
        }
    }

    long long int maxc = dp[0][0];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            maxc = max(maxc, dp[i][j]);
        }
    }
    return maxc;
}