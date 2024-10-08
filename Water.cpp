#include <bits/stdc++.h>
using namespace std;

bool compare(pair<int, int> &a, pair<int, int> &b)
{
    return a.second > b.second;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        vector<pair<int, int>> v;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            v.push_back({i, a[i]});
        }
        sort(v.begin(), v.end(), compare);

        if (v[0].first < v[1].first)
        {

            cout << v[0].first << " " << v[1].first << endl;
        }
        else
        {
            cout << v[1].first << " " << v[0].first << endl;
        }
    }
    return 0;
}