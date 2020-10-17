#include <iostream>
using namespace std;

bool covid(int n, int k, int x, int y)
{

    for (int i = 0; i < n; i++)
    {
        if (x == y)
            return true;

        x = (x + k) % n;
    }

    return false;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int cases;
    cin >> cases;
    
    while (cases--)
    {
        int n, k, x, y;
        cin >> n >> k >> x >> y;

        if (covid(n, k, x, y))
            cout << "YES";
        else
            cout << "NO";

        cout << endl;
    }
    return 0;
}
