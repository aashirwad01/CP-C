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




void solve(int *a,int n)
{
    int ak[2];
  for(int i=0;i<n;i++){
      if(a[abs(a[i])-1]>0){
          a[abs(a[i])-1]=-a[abs(a[i])-1];
      }
      else{
          ak[0]=abs(a[i]);

      }
  }

  for(int i=0;i<n;i++){
      if(a[i]>0){
          ak[1]=i+1;
      }
  }

  int *ans;
  ans=ak;
for(int i=0;i<2;i++){
    cout<<*(ans+i)<<" ";
}

	
}




signed main(){
    fast;
    int t = 1;
    int n;
    cin >> n;
  
    int ar[n];
    
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }

    


    while(t--){
    	solve(ar,n);
    }
    return 0;
}
