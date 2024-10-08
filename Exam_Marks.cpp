#include <bits/stdc++.h>
using namespace std;

int n, m;
int marks[1000];
bool dp[1001];

bool perfectScore(int rqMarks)
{
    dp[0] = true;

    for (int i = 0; i < n; i++)
    {
        for (int j = rqMarks; j >= marks[i]; j--)
        {
            dp[j] = dp[j] || dp[j - marks[i]];
        }
    }

    return dp[rqMarks];
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        cin >> n >> m;

        for (int i = 0; i < n; ++i)
        {
            cin >> marks[i];
        }

        memset(dp, false, sizeof(dp));
        int rqMarks = 1000 - m;
        if (rqMarks == 0)
        {
            cout << "YES" << endl;
        }
        else if (rqMarks < 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            if (perfectScore(rqMarks))
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}
