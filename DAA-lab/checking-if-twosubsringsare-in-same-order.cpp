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




void solve(char *a,char *b,int n,int m)
{
    int lar[n+1][m+1];
    int i,j;

    for(i=0;i<=n;i++){
        for(j=0;j<=m;j++){
            if(i==0 || j==0){
                lar[i][j]=0;
            }
            else if(a[i-1]==b[j-1]){
                lar[i][j]=lar[i-1][j-1]+1;
            }
            else 
            lar[i][j]=max(lar[i-1][j],lar[i][j-1]);
        }
    }

    cout<< lar[m][n];
	
}




int main(){
    fast;
    int t;
    char a[]="abcdefg";
    char b[]="accdabe";
    t = 1;
    int n=strlen(a);
    int m=strlen(b);
    while(t--){
    	solve(a,b,n,m);
    }

     #ifndef ONLINE_JUDGE
        cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif
    return 0;
}
