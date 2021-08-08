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




void solve(int a[],int b[],int n,int m){
    int i;
   
    if(n<=m){
        
    for (i=0;i<n;i++){

      
       if(b[i]<a[n-1]){
       swap(b[i],a[n-1]);
       }

    sort(a,a+n);       
       
    }
        // sort(a,a+n);
       sort(b,b+m);
       
    }
    else{
      
        for (i=0;i<m;i++){

      
       if(b[i]<a[n-1]){
       swap(b[i],a[n-1]);
       }
        sort(a,a+n);        
        
       
    }
    //    sort(a,a+n);
       sort(b,b+m);
       
 
    }
       

	 for (i=0;i<n;i++){
    cout<<a[i]<<" ";
    }
    
 for (i=0;i<m;i++){
    cout<<b[i]<<" ";
    }   
}

void merge(int a[],int b[],int n,int m){
    int i,j,k;
    i=0;j=0;k=n-1;
    while ((i<=k) && j<m){
        if(a[i]<b[j]){i++;}
        else{
            swap(b[j++],a[k--]);
        }
    }
    sort(a,a+n);
    sort(b,b+m);

     for (i=0;i<n;i++){
    cout<<a[i]<<" ";
    }
    
 for (i=0;i<m;i++){
    cout<<b[i]<<" ";
    }   
}





int main(){
    fast;
    int i,n,m;
    int t = 1;
    cin>>n>>m;
    int a[n];int b[m];
    for (i=0;i<n;i++){
    cin>>a[i];
    }
    for (i=0;i<m;i++){
    cin>>b[i];
    }
    while(t--){
    	solve(a,b,n,m);
        cout<<endl;
        // merge(a,b,n,m);
    }
    #ifndef ONLINE_JUDGE
        cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
        #endif
    return 0;
}
