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




void solve(int r,int c,int ar[][3]  )
{
    for(int j=0;j<c;j++){
        if(j&1){
            for(int i=r-1;i>=0;i--){
                cout<<ar[i][j]<<" ";
            }
        }
        else{
            for(int i=0;i<r;i++){
                cout<<ar[i][j]<<" ";
            }
        }
       
    }
}



signed main(){
    fast;
    int t = 1; 
    int r;
    cin >>r;
    const int c=3;
    int a[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>a[i][j];
        }
    }
    
    while(t--){
    	solve(r,c,a);
    }
    return 0;
}
