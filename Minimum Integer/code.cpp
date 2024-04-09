#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

string solve(string n, int k) {
    stack<char> s;
    int len = n.length();
    for(int i = 0; i < len; i++) {
        if(s.empty()) {
            s.push(n[i]);
        }
        else if(s.top() > n[i]) {
            while(!s.empty() && s.top() > n[i] && k > 0) {
                s.pop();
                k--;
            }
            s.push(n[i]);
        }
        else if(s.top() <= n[i])
            s.push(n[i]);
    }
    while(k > 0) {
        s.pop();
        k--;
    }
    string a;
    while(!s.empty()) {
        a.push_back(s.top());
        s.pop();
    }
    reverse(a.begin(), a.end());
    if(a == "") return "0";
    int x = 0;
    while(a[x] == '0') x++;
    if(x > 0) return a.substr(x, a.size() - x) != "" ? a.substr(x, a.size() - x) : "0";
    return a;
}


signed main(){
ios_base::sync_with_stdio(0);
cin.tie(0); cout.tie(0);

string s; cin>>s;
int k; cin>>k;
cout<<solve(s, k)<<endl;

return 0;
}