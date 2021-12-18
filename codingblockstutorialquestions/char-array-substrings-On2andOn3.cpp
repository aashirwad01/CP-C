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




void solven3(char *s)
{
    int n=strlen(s);
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            for(int k=i;k<=j;k++){
                cout<<s[k];
            }
            cout<<endl;
        }

    }
	
}

void solven2(char *s){

    int n=strlen(s);
    for(int i=0;i<n;i++){
        string subs;
        for(int j=i;j<n;j++){
            subs+=s[j];

        
        cout<<subs<<endl;
    }
    }
    
}




signed main(){
    fast;
    int t = 1; 
    // cin >> t;
    char s[100];
    cin.getline(s,100);
    while(t--){
    	// solven3(s);
        solven2(s);
    }
    return 0;
}
