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
    int i;int temp;int j;
    
    for(i=1;i<n;i++){
        temp=a[i];
        j=i-1;
        while(j>=0 && a[j]>temp)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=temp;
        }

        for(i=0;i<n;i++){
        cout<<a[i]<<" ";
    }  
	
}

void solve_recursively(int a[],int i,int n){
    int temp;int j;
    
        if(i>=n){return;}

        solve_recursively(a,i+1,n);

        temp=a[i];

        j=i+1;
        while(j<=n && a[j]<temp)
        {
            a[j-1]=a[j];
            j++;
        }
        a[j-1]=temp;
        
	
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
        
        solve_recursively(b,0,n);
        for(i=0;i<n;i++){
        cout<<b[i]<<" ";
    }
    }
   #ifndef ONLINE_JUDGE
        cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}
