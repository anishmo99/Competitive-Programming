void wayTooLongWords(string s)
{
    if (s.length() <= 10)
    {
        cout << s << endl;
    }
    else
    {
        cout << s.front() << s.length() - 2 << s.back() << endl;
    }
}