#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"


signed main(){
ios_base::sync_with_stdio(0);
cin.tie(0); cout.tie(0);


int mod = 1e9+7;
int n; cin >> n;
vector<int> dp(n + 1);
dp[0] = 1;

for(int i = 1; i <= n; i++){
    for(int j = 1; j <= 6; j++){
        if(j <= i){
            dp[i] = (dp[i] + dp[i - j]) % mod;
        }
    }
} 

cout << dp[n] << endl;
return 0;
}