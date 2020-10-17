void team()
{
    int contests, sure;
    int count = 0;
    cin >> contests;
    while (contests--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        sure = a + b + c;
        if (sure >= 2)
        {
            count++;
        }
    }
    cout << count;
}