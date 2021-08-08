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




void solve(int a[],int n,int k)
{
    int b[k];int i;int v;
    
    for(i=0;i<=k;i++){
    b[i]=0;
}

for(i=0;i<n;i++){
    if(a[i]<k){
       b[a[i]]++;
       
        
    }
}
int s=0;


        
   
        
    
    
for(i=0;i<=floor(k/2);i++){

   if(i==k-i){
        s=s+((b[i])*(b[k-i]-1)/2);
   }

   
    else if(b[i]!=0 && b[k-i]!=0 ){
       s=s+b[i]*b[k-i];
       
      cout<<i<<" "<<b[i]<<" "<<k-i<<" "<<b[k-i]<<endl;
    }
}
cout<<s;
	
}




int main(){
    fast;
    int n;int i;int k;
    int t = 1;
    cin >> n;
    int a[n];
    for (i=0;i<n;i++){
        cin>>a[i];
    }
    cin>>k;
    while(t--){
    	solve(a,n,k);
    }
    return 0;
}
