#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

int solve(const vector<vector<int>>& color, int n, int N) {
    int ans = 0;
    for (int a = 0; a < n; ++a) {
        for (int b = a + 1; b < n; ++b) {
            int count = 0;
            for (int i = 0; i <= n/N; ++i) {
                count += __builtin_popcountll(color[a][i] & color[b][i]);
            }
            ans += count * (count - 1) / 2;
        }
    }

    return ans;
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int N = 32;
    int n; cin >> n;
    vector<vector<int>> v(n, vector<int>((n + N - 1) / N));

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            int a; cin >> a;
            v[i][j / N] |= (a << (j % N));
        }
    }

    cout << solve(v, n, N) << endl;

    return 0;
}
