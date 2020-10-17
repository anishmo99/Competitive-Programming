#include <iostream>
#include <string>
#include <cstring>
#include <cstdio>
#include <cmath>
#include <climits>
#include <vector>
#include <cstdlib>
#include <unordered_map>
#include <unordered_set>
#include <map>
#include <set>
#include <utility>
#include <algorithm>
#include <stack>
#include <queue>
#include <list>
using namespace std;
// incomplete
#define F first
#define S second
#define PB push_back
#define EB emplace_back
#define MP make_pair
#define P push

typedef vector<int> vi;
typedef pair<int, int> pi;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int tasks;
    cin >> tasks;
    priority_queue<int> pq;
    vector<int> vec;

    while (tasks--)
    {
        int task1_2;
        cin >> task1_2;

        if (task1_2 == 1)
        {
            int bug;
            cin >> bug;
            pq.push(bug);
            continue;
        }
        else if (task1_2 == 2)
        {
            if (pq.size() < 3)
            {
                cout << "Not enough enemies" << endl;
                continue;
            }

            else
            {
                stack<int> temp;

                int pq_size = pq.size();

                for (int i = 0; i < pq_size / 3; i++)
                {
                    temp.push(pq.top());
                    pq.pop();
                }

                cout << pq.top() << endl;

                while (!temp.empty())
                {
                    pq.push(temp.top());
                    temp.pop();
                }
            }
        }
    }

    return 0;
}