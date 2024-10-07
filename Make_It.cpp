#include <bits/stdc++.h>
using namespace std;

bool bfs(int n) {
    bool vis[n + 1];
    memset(vis, false, sizeof(vis));
    queue<int> q;
    q.push(1);
    vis[1] = true;

    while (!q.empty()) {
        int cur = q.front();
        q.pop();
        if (cur == n) {
            return true;
        }

        int add = cur + 3;
        int mul = cur * 2;

        if (add <= n && !vis[add]) {
            q.push(add);
            vis[add] = true;
        }
        if (mul <= n && !vis[mul]) {
            q.push(mul);
            vis[mul] = true;
        }
    }
    return false;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        if (bfs(n)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
