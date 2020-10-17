void nextRound()
{
    int n, k;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int count = 0;
    k = a[k - 1];
    for (int i = 0; i < n; i++)
    {
        if (a[i] <= 0)
            continue;
        if (a[i] >= k)
            count++;
    }
    cout << count;
}