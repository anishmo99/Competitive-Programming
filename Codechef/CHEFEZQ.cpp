#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int queries(vector<int> arr, int n, int k)
{

    bool flag = false;
    int i = 0;

    int sum = accumulate(arr.begin(), arr.end(), 0);
    for (i = 0; i < n - 1; i++)
    {
        if (arr[i] < k)
        {
            flag = true;
            break;
        }
        arr[i + 1] += arr[i] - k;
    }

    return flag == true ? i + 1 : (sum / k) + 1;
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

        int n, k;
        cin >> n >> k;

        vector<int> arr(n, 0);

        for (int i = 0; i < n; i++)
            cin >> arr[i];

        cout << queries(arr, n, k);

        cout << endl;
    }
    return 0;
}
