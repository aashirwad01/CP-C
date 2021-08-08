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




void solve_iteratively(int a[],int n){
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<n-1;j++){
            if(a[j+1]<a[j]){
                swap(a[j],a[j+1]);
            }
        }
    }

  for(i=0;i<n;i++){
        cout<<a[i]<<" ";
    }  
	
}

void solve_recursively(int a[],int n){
    int j;
    if(n==1){return;}
    for(j=0;j<n-1;j++){
        if(a[j+1]<a[j]){
                swap(a[j],a[j+1]);
            }
    }
    n--;
    solve_recursively(a,n);
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
    int b[n];
    for(i=0;i<n;i++){
        b[i]=a[i];
    }
    while(t--){

        cout<<"Iterative method"<<endl;
    	solve_iteratively(a,n);
        cout<<endl;
        cout<<"Recursive method"<<endl;
        
        solve_recursively(b,n);
        for(i=0;i<n;i++){
        cout<<b[i]<<" ";
    }  
    }

    #ifndef ONLINE_JUDGE
        cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}
