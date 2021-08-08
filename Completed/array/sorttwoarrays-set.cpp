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




void solve(long long int a[],long long int a1[],long long int n1,long long int n2)
{
	set<int>S;
    for(long long int i=0;i<n1;i++){
        S.insert(a[i]);
    }
    for(long long int i=0;i<n2;i++){
        S.insert(a1[i]);
    }

    cout<<S.size();
}





int main(){
    fast;
    int t = 1;
    
    long long int n1,n2;
    cin>>n1>>n2;
    long long int a[n1];
    long long int a1[n2];
    long long int i;
    for (i = 0;i<n1;i++){
        cin>>a[i];
    }
    for (i = 0;i<n2;i++){
        cin>>a1[i];
    }
    
    

    while(t--){
    	solve(a,a1,n1,n2);
    }

    
    return 0;
}
