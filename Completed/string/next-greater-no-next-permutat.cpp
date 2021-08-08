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




void solve(vector<int>v){
    int n=v.size();
    int i;
    int j;
    for( i=n-2;i>=0;i--){
        if(v[i+1]>v[i]){
            break;
        }
    }

    if(i<0){
        reverse(v.begin(),v.end());
    }
    else{
        for( j=n-1;j>i;j--){
            if(v[j]>v[i]){
                break;
            }
        }
    }

    swap(v[j],v[i]);
    reverse(v.begin()+i+1,v.end());

    cout<<v[0]<<v[1]<<v[2];
	
}




signed main(){
    fast;
    int t = 1;
    int i;
    vector<int>v;
    while(cin>>i){
        v.push_back(i);
    }

    while(t--){
    	solve(v);
    }
    return 0;
}
