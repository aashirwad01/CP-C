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




void solve(int a[],int b[],int n1,int n2)
{
	map<int,int>mp;
    int i;
    
    for(i=0;i<n1;i++){
        mp[a[i]]=1;
    }
    int f=0;
    for(i=0;i<n2;i++)
    {
       if(mp[b[i]]==NULL){
           f=1;cout<<"No"<<endl;break;

       }
    }
   if(f==0){
       cout<<"Yes"<<endl;
   }
    
}




signed main(){
    fast;
    int n1;int n2;int i;
    int t = 1;
    cin>>n1;
    cin>>n2;
    int a[n1];
    int b[n2];
    for(i=0;i<n1;i++){
        cin>>a[i];
    }
    for(i=0;i<n2;i++){
        cin>>b[i];
    }
    
    while(t--){
    	solve(a,b,n1,n2);
    }
    return 0;
}
