#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

int hammingDistance(int x, int y)
{
    int xorValue = x ^ y;
    int distance = 0;

    while (xorValue > 0)
    {
        distance += xorValue & 1;
        xorValue >>= 1;
    }

    return distance;
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
    int ans = 0;
    for(int i = 0; i<n;i++){
        for(int j = i+1;j<n;j++){
            ans+= hammingDistance(v[i],v[j]);
        }
    }
    cout<<ans<<endl;
    return 0;
}