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
    int mi=INT16_MAX;
     
    int i=0;int dif=0;int k;int d=0;int ik;
    for (i=0;i<n;i++){

        if(mi>(a[i])){
            mi=a[i];
            ik=i;
        }
       else{
           mi=mi;
       }
        

        
        if(dif<(a[i]-mi)){
            dif=a[i]-mi;
            k=i;
        }
       else{
           dif=dif;
       }
        

    }
    for(i=ik;i<=k;i++){
        a[i]=0;
    }
    
    
    d=d+dif;
   
    
    mi=INT16_MAX;
    dif=0;

    for(i=0;i<n;i++){

    if(a[i]!=0){
       
             mi=min(mi,a[i]);
            
            dif=max(dif,a[i]-mi);
        }

       

    }

    d=d+dif;

    cout<<d<<endl;
    
	
}




int main(){
    fast;
   
    int n;int i;
    int t = 1;
    cin >> n;
   
    int a[n];

    for(i=0;i<n;i++){
        cin>>a[i];
    }
    while(t--){
    	solve(a,n);
    }
    return 0;
}
