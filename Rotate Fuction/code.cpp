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
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    vector<int> u = v;
    reverse(u.begin(), u.end());

    int ans = 0, pre = 0, sum = 0;
    for (int i = 0; i < n; i++)
    {
        ans += (i * v[i]);
        sum += v[i];
    }
    pre = ans;

    int rotate = 1, j = 0;
    while (rotate < n)
    {
        int temp = pre;
        temp = pre + sum - (n * u[j]);
        j++;

        ans = max(ans, temp);
        pre = temp;
        rotate++;
    }
    cout << ans << endl;

    return 0;
}