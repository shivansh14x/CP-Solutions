#include <bits/stdc++.h>
using namespace std;

#define int long long
#define vi vector<int>
#define mii map<int, int>
#define endl '\n'

void Solve() {
    int n, k;
    cin >> n >> k;

    vi a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    mii cnt;
    int mx = 0;

    for (int i = 0; i < n; i++) {
        if (a[i] % k == 0) continue;

        int need = k - a[i] % k;
        cnt[need]++;

        mx = max(mx, cnt[need]);
    }

    int ans = 0;

    for (mii::iterator it = cnt.begin(); it != cnt.end(); it++) {
        int key = it->first;
        int value = it->second;

        if (value == mx) {
            ans = k * (value - 1) + key + 1;
        }
    }

    cout << ans << endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        Solve();
    }

    return 0;
}