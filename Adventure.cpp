#include <bits/stdc++.h>
using namespace std;
 int n, w;

int knapsack( int weight[], int val[]) {
    int dp[n + 1][w + 1];
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= w; j++) {
            if (i == 0 || j == 0) {
                dp[i][j] = 0;
            } else if (weight[i - 1] <= j) {
                dp[i][j] = max(dp[i - 1][j], val[i - 1] + dp[i - 1][j - weight[i - 1]]);
            } else {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }

    return dp[n][w];
}

int main() {
    int t;
    cin >> t;

    while (t--) {
       
        cin >> n >> w;

        int weight[n], val[n];

        for (int i = 0; i < n; i++) {
            cin >> weight[i];
        }

        for (int i = 0; i < n; i++) {
            cin >> val[i];
        }

        cout << knapsack(weight, val) << endl;
    }

    return 0;
}
