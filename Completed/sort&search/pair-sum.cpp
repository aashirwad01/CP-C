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

bool searc(int a[],int ele,int n){
    int l=0;
   
    int r=n-1;
    while(l<r){
        int mid=(l+r)/2;
        if(ele==a[mid]){
          
            return 1;
        }
        else if(ele>a[mid]){
            l=mid+1;
        }
        else{
            r=mid-1;
        }
    }
    return 0;
}


void solve(int a[],int n){
    int dif=0;
    cin>>dif;
    sort(a,a+n);
   

    for(int i=0;i<n;i++){
       
        if(searc(a,dif-a[i],n)){

            cout<<1;
            return ;
        }
        else{
            continue;
        }

    }
    cout<<-1;
	
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
    while(t--){
    	solve(a,n);
    }
    return 0;
}
