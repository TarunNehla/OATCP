#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

void solve(){
    string s; cin>>s;
    for(int i = 0 ;i<3;i++){
        cout<<s[i]<<s[i+1]<<" ";
    }
    for(int i =0; i<3;i++){
        cout<<s[i]<<s[i+1]<<s[i+2]<<" ";
    }
    cout<<endl;
return;
}

signed main()
{
ios_base::sync_with_stdio(0);
cin.tie(0); cout.tie(0);
int t; cin>>t;
while(t--){
solve();
}
return 0;
}