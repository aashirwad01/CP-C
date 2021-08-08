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




void solve(long long int n , long long int a[]){
    long long int i,k,l,temp;
   k=0;l=n-1;

    for (i=0;i<n;i++)
    {
        if (a[i]<0){
            temp=a[k];
            a[k]=a[i];
            a[i]=temp;
            k++;
        }
    }

	
}




int main(){
    fast;
   long long int n;
    cin>>n;
    long long int a[n];
    long long int i;
    for ( i=0;i<n;i++)
    {
    cin>>a[i];
    }
    int t = 1;
   
    while(t--){
    	solve(n,a);
    }
    
     for (i = 0; i< n;i++){
    cout<<a[i]<<" ";
     }
    return 0;
     #ifndef ONLINE_JUDGE
        cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
        #endif
}
