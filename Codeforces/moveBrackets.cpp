void moveBrackets(int cases)
{
    while (cases--)
    {
        int n;
        cin >> n;
        stack<char> stack;
        char ch;
        for (int i = 0; i < n; i++)
        {
            cin >> ch;
            if (stack.empty())
            {
                stack.push(ch);
                continue;
            }
            else
            {
                if (ch == ')' && stack.top() == '(')
                    stack.pop();
                else
                {
                    stack.push(ch);
                }
            }
        }
        cout << stack.size() / 2 << endl;
    }
}
