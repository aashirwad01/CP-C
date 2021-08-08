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




void solve(int a[],int n,int m){
    sort(a,a+n);int i=0;

    int min_diff = INT_MAX;
 
    int k1,k2;
    for (int i = 0; i + m - 1 < n; i++) {
        int diff = a[i + m - 1] - a[i];
        if (diff < min_diff)
            min_diff = diff;
            k1=i;
            k2=i+m-1;
    }
    cout<<k1<<" "<<k2;
}
    
    

    
    
    

	





int main(){
    fast;
    int n;int m;
    int t = 1;
    cin >> n;
    cin>>m;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    while(t--){
    	solve(a,n,m);
    }
    return 0;
}
