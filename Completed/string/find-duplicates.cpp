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




void solve(string s){
    int i;
    map<char,int>mp;
    for(i=0;i<s.size();i++){
        mp[s[i]]++;

    }
    for(auto it: mp){
        if(it.second>1){
            cout<<it.first<<" "<<it.second<<endl;






        }
    }
	
}





signed main(){
    fast;
    int t = 1;
   string s;
   cin>>s;


   
    while(t--){
    	solve(s);
    }
    return 0;
}
