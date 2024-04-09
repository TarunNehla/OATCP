#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"


signed main(){
ios_base::sync_with_stdio(0);
cin.tie(0); cout.tie(0);
int s ;cin>>s;
vector<int>v;
for(int i=0;i<s;i++){
    int x;cin>>x;
    v.push_back(x);
}
int n; cin>>n;  
long p = 0, c = 1, x = 0;
while (c <= n) {
    if (x < s && v[x] <= c) c += v[x++];
    else {
        c *= 2;
        p++;
    }
}
cout<<p<<endl;

return 0;
}