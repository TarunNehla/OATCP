#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"


signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    if(n==0){
        cout<<0<<endl;
        return 0;
    }
    vector <int> v;
    for (int i = 0; i < n; i++)
    {
        int x; cin>>x;
        v.push_back(x);
    }
    vector<pair<int, int>> dp(n + 1, {-1, -1});
    int ans = v[0];
    dp[0] = {v[0], v[0]};
    for (int i = 1; i < n; i++)
    {
        int a = dp[i - 1].first * v[i];
        int b = dp[i - 1].second * v[i];
        dp[i].first = max({a, b, v[i]});
        dp[i].second = min({a, b, v[i]});
        ans = max(dp[i].first, ans);
    }
    cout<<ans<<endl;
    return 0;
}