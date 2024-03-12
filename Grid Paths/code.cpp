#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"


signed main(){
ios_base::sync_with_stdio(0);
cin.tie(0); cout.tie(0);

int n; cin>>n;  
vector<vector<char>>matrix;

// taking input
for(int i = 0;i<n;i++){
	vector<char>x;
	for(int j = 0; j<n;j++){
		char y; cin>>y;
		x.push_back(y);
	}
	matrix.push_back(x);
}
int mod = 1e9+7;
vector<vector<int>>dp(n,vector<int>(n,0));
for(int i = 0; i<n;i++){
	if(matrix[i][0]!='*'){
		dp[i][0] = 1;
	}
	if(matrix[0][i]!='*'){
		dp[0][i] = 1;
	}
}
for(int i = 1;i<n;i++){
	for(int j = 1; j<n;j++){
		if(matrix[i][j]!='*'){
			dp[i][j] = (dp[i-1][j] + dp[i][j-1])%mod;
		}
	}
}
cout<<dp[n-1][n-1]%mod<<endl;
return 0;
}