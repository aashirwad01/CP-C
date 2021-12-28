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






void solve(int n,int p)
{
  int s=0;int e=n;

  int mid;
  float ans ;
// integer part
  while (s<=e)
  {
     mid=(s+e)/2;

     if(mid*mid==n){
         ans = mid ;
         break;
     }
     if(mid*mid <n){
         s = mid +1;
         ans = mid;
     }
     else{
         e= mid-1;
     }
  }

if(ans * ans <n){

// fractional part
float inc = 0.1;
for(int i=0;i<p;i++){
    while(ans*ans<=n){
        ans+=inc;
    }
    ans = ans -inc;
    inc = inc/10;

}
}

  cout<< ans<<endl ;
    

    
	
}



signed main(){
    fast;
    int t = 1;
   int n;
   cin>>n;
   int p;
   cin>>p;
    while(t--){
    solve(n,p);
    solve(10,3);
        
       
    }
    return 0;
}
