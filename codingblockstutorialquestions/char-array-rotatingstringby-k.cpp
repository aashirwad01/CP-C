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




void solve(char *a , int k){
    int i=strlen(a);
    while(i>=0){
        a[i+k]=a[i];
        i--;
    }
    i=strlen(a);
    int f=0;
    int j=i-k;
    while(j<i){
        a[f]=a[j];
        j++;
        f++;
    }
    a[i-k]='\0';
	cout<<a;
}




signed main(){
    fast;
    int t = 1;
    int k=0;
   
    char a[100];
    cin.getline(a,100);
    cin >> k;
    while(t--){
    	solve(a,k);
    }
    return 0;
}
