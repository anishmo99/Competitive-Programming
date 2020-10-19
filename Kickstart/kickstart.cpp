long long int solve()
{
    string s;
    cin >> s;

    if (s.size() < 5)
        return 0;

    long long int count = 0;

    string kick = "KICK";
    string start = "START";

    size_t found_kick = s.find(kick);
    size_t found_start = s.find(start);

    int prev_start = found_start;

    if (found_kick == string::npos or found_start == string::npos)
        return 0;

    while (found_kick < s.length())
    {

        while (found_kick > found_start)
        {
            found_start = s.find(start, prev_start + 1);
            prev_start = found_start;
        }

        while (found_kick < found_start and found_start < s.length())
        {
            count++;
            found_start = s.find(start, found_start + 1);
        }

        found_start = prev_start;

        found_kick = s.find(kick, found_kick + 1);
    }

    return count;
}