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




bool solve(string s,string m){
    int a[256]={0};
    int b[256]={0};
    int n=s.size();
    int n2=m.size();
    if(n!=n2){
        return 0;
    }
   for(int i=0;i<n;i++){
       a[s[i]]++;
       b[m[i]]++;
       

       if(a[s[i]]!=b[m[i]]){
           return 0;
       }
    
   }

   return 1;
	
}




signed main(){
    fast;
    int t = 1;
    string s;
    string m;
    cin >> s;
    cin>>m;
    while(t--){
    	cout<<solve(s,m);
    }
    return 0;
}
