void bitpp()
{
    int cases;
    cin >> cases;
    string s;
    int x = 0;
    while (cases--)
    {
        cin >> s;
        if (s == "++X" || s == "X++")
            x++;
        else
            x--;
    }
    cout << x;
}
