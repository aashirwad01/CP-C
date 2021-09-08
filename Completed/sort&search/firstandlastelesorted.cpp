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




vector<int> find(int a[], int k , int n )
{
    vector<int>v(2);
    auto it = find(a,a+n,k)-a;
    if(it!=n){
       v[0]=it;
    }
    else{
        v[0]=-1;
    }
    
  auto i=it;


    for(;i<n;i++)
    {
        
        if(a[i]!=k){
            break;
        }
    }
    
    if(i!=n){
      v[1]=i-1;
    }
    else if(i==n && it!=-1 && a[n-2]!=k){
       v[1]=v[0];

    }
    else if(i==n && it!=-1 && a[n-2]==k){
        v[1]=i-1;
        
    }
    else{
       v[1]=-1;
    }
    
    
    return v;
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
    sort(a,a+n);
    int k;
    cin>>k;
    vector<int>v(2);
    while(t--){
    	v=find(a,k,n);
    }
   
    return 0;
}
