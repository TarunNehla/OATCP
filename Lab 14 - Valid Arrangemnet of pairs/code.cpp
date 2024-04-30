#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

void dfs(int n, vector<vector<int>> &a, map<int, vector<int>> &ad)
{
    while (ad[n].size())
    {
        int nx = ad[n].back();
        ad[n].pop_back();
        dfs(nx, a, ad);
        a.push_back({n, nx});
    }
}
vector<vector<int>> valArr(vector<vector<int>> &pr)
{
    vector<vector<int>> a;
    map<int, vector<int>> ad;
    map<int, int> in;
    for (auto &p : pr)
    {
        ad[p[0]].push_back(p[1]);
        ++in[p[0]];
        --in[p[1]];
    }
    int st = -1;
    for (auto &i : in)
    {
        if (i.second > 0)
            st = i.first;
    }
    if (st == -1)
    {
        st = pr[0][0];
    }
    dfs(st, a, ad);
    reverse(a.begin(), a.end());
    return a;
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    vector<vector<int>> v;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        v.push_back({x, y});
    }
    vector<vector<int>> a = valArr(v);
    if (a.size() != v.size())
    {
        cout << "Arrangement not possible" << endl;
    }
    else
    {
        for (auto &p : a)
        {
            cout << p[0] << " " << p[1] << endl;
        }
    }

    return 0;
}
