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




void solve(){
    int n;int i;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    int j;
    for(i=0;i<n;i++){
        if(a[i]<0){
            j++;

        }
    }
int s=1;int k=INT16_MIN;int sn=1;int kn=INT16_MIN;
	for(i=0;i<n;i++){
        s=s*a[i];
        if(a[i]>0){
            sn=sn*a[i];
            
        }
        else{
            sn=1;
            
        }
       if(kn<sn){kn=sn;}
        if(k<s){
            k=s;
        }
        if(s==0){
            s=1;
        }
    }
    cout<<k<<" "<<kn;
}




int main(){
    fast;
    int t = 1;
    
    while(t--){
    	solve();
    }
   
    return 0;
}
