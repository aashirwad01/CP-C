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
    int i=0;
    int j=n-1;
    

    

    for(i=1;i<j;)
    {
        
        cout<<a[i]<<a[j]<<endl; 
       
        if(a[i]*a[i-1]<0){
            i++;
        }
        
        else{
            
            if(a[i]*a[j]<0){
               swap(a[i],a[j]);
             
                i++;j=n-1;
         }
            else{
            
                j--;
            }
        }
         
        
    }

    for(int x=0;x<n;x++){
        cout<<a[x]<<" ";
    }
	
}




int main(){
    fast;
    int n,i;
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
