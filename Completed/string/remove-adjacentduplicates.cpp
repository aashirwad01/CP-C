#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long ll;typedef long double ld;typedef pair<int,int> pii;
#define F first
#define S second
#define PB push_back
#define MP make_pair
const ll mod = 1e9+7, N = 2e6+7, M = 2e6+7, INF = INT_MAX/10;
ll powe(ll x, ll y){ x = x%mod, y=y%(mod-1);ll ans = 1;while(y>0){if (y&1){ans = (1ll * x * ans)%mod;}y>>=1;x = (1ll * x * x)%mod;}return ans;}




string solve(string s){
    int n=s.length();
    stack<char>st;
    for(int i=0;i<n;i++){
        if(st.empty()){
            st.push(s[i]);
        }
        else{
            if(st.top()!=s[i]){
                st.push(s[i]);
            }
        }
    }
    string str="";
    while(!st.empty()) {
        str=st.top()+str;
        st.pop();
    }
    return str;
}




signed main(){
    fast;
    int t = 1;
    string s;
    cin >> s;
    while(t--){
    	cout<<solve(s);
    }
    return 0;
}
