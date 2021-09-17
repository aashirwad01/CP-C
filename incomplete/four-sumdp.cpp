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




void solve(int a[],int n){
    int k;
    cin>>k;
    int dp[n+1][n+1]={0};
  
    for(int i=1;i<=n;i++){
        dp[i][0]=a[i-1];
        dp[0][i]=a[i-1];
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i!=j){
                dp[i][j]=dp[0][j]+dp[i][0];
            }
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
           if(i!=j){
               dp[i][j]=dp[i][j]-k;
           }
        }
        
    }
    for(int i=0;i<=n;i++){
        for(int j=0;j<=n;j++){
           cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }


	
}




signed main(){
    fast;
    int t = 1;
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    while(t--){
    	solve(a,n);
    }
    return 0;
}
