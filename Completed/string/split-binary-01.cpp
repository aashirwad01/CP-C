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
    int j=0;int f=0;
    for( int i=0;i<s.size();i++){
        if( s[i]=='0'){
            f++;
        }
        else if(s[i]=='1'){
            f--;
        }

        if(f==0 && i!=0){
            j++;
        }

    }
    if(j!=0){
         cout<<j<<endl;
    }
    else {
        cout<<-1;
    }
   
	
}




signed main(){
    fast;
    string s;
    int t = 1;
    cin >> s;
    while(t--){
    	solve(s);
    }
    return 0;
}
