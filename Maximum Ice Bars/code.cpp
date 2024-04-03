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
	int k;
	cin >> k;
	int ans = 0;
	sort(v.begin(), v.end());
	for (int i = 0; i < n; i++)
	{
		if (v[i] <= k)
		{
			ans++;
			k -= v[i];
		}
		else
		{
			break;
		}
	}
	cout << ans << endl;
	return 0;
}