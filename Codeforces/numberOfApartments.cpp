#include <iostream>
#include <cstdio>
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 
    int cases;
    cin >> cases;
    
    while (cases--)
    {
        int n;
        cin >> n;
 
        if(n == 1 or n == 2 or n == 4){
            cout << -1 << endl;
            continue;
        }
        
        if(n % 3 == 0)
            cout << n / 3 << " " << 0 << " " << 0 << endl;
        else if(n % 3 == 1)
            cout << (n - 7) / 3 << " " << 0 << " " << 1 << endl;
        else 
            cout << (n - 5) / 3 << " " << 1 << " " << 0 << endl;
    }
    return 0;
}