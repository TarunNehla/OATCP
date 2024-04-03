#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

bool compare(const string &a, const string &b)
{
    return a + b > b + a;
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    vector<string> str;
    for (int i = 0; i < n; i++)
    {
        str.push_back(to_string(v[i]));
    }
    sort(str.begin(), str.end(), compare);
    string ans;
    for (int i = 0; i < n; i++)
    {
        ans += str[i];
    }
    if (ans[0] == '0')
        cout << 0;
    else
        cout << ans;

    return 0;
}
