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




void solve(int a[],int n,int k){
    int i;map<int,int>mp;
    for(i=0;i<n;i++){
        mp[a[i]]=0;

    }
   for(i=0;i<n;i++){
        mp[a[i]]+=1;

    } 
    double v=(n/k);
    int f=0;

    for (auto it=mp.begin(); it!=mp.end();++it)
    {
        if(it->second >v){
            f++;
        }
    }
    cout<<f<<endl;

	
}




int main(){
   fast;
   int k;
    int n;int i;
    int t = 1;
    cin >> n;
    cin>>k;
    int a[n];

    for(i=0;i<n;i++){
        cin>>a[i];
    }
    while(t--){
    	solve(a,n,k);
    }
    return 0;
}
