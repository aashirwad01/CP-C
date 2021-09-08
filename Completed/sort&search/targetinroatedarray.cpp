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




void solve(vector<int>v,int k){
    int n=v.size();
    int mi=v[min_element(v.begin(),v.end())-v.begin()];
    int ma=v[max_element(v.begin(),v.end())-v.begin()];
    int f=-1;

    if(k==v[n-1]){
        f=n-1;
        cout<<n-1;
    }
    else if(k<v[n-1]){
        int i=n-1;
        do{
            if(v[i]==k){
                cout<<i;
                f=i;
                break;
            }
            i--;

        }while( v[i]>=mi );
    }
    else if(k>v[n-1]){
        int i=0;
        do{
            if(v[i]==k){
                cout<<i;
                f=i;
                break;
            }
            i++;

        }while(v[i]<=ma);
    }
	if(f==-1){
        cout<<f;
    }
}




signed main(){
    fast;
    int t = 1;
    int k;
   cin>>k;
   int n;
   vector<int>v;
   while(cin>>n){
       v.push_back(n);

   }
   solve(v,k);

}
