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
    vector<int> v, u;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    int m; 
    cin>>m;
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        u.push_back(x);
    }
    sort(v.begin(), v.end());
    sort(u.begin(), u.end());
    int i = 0;
    int j = 0;
    int ct = 0;
    while (i < n && j < m)
    {
        if (abs(v[i] - u[j]) <= 1)
            ct++, i++, j++;
        else if (v[i] < u[j])
            i++;
        else
            j++;
    }
    cout << ct << endl;
    return 0;
}