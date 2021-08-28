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




string geeks_sliding_window(string s){
    int n=s.size();
    if(n<=1){
        return s;

    }

    int di=0;
    bool vis[256]={false};
    for( int i=0;i<n;i++){
        if(vis[s[i]]==false){
            vis[s[i]]=true;
            di++;
        }
    }

    int b=0,bi=-1,mi=INT_MAX;

    int c=0;
    int curc[256]={0};

    for( int j=0;j<n;j++){
        curc[s[j]]++;
    

    if(curc[s[j]]==1){
        c++;
    }

    if(c==di){
        while(curc[s[b]]>1){
            if(curc[s[b]]>1){
                curc[s[b]]--;
            }
            b++;
        }
        int len=j-b+1;
        if(mi>len){
            mi=len;
            bi=b;
        }
    }

}

return s.substr(bi,mi);
}




signed main(){
    fast;
    int t = 1;
    string s;
    cin >> s;
    while(t--){
    	cout<<geeks_sliding_window(s).size();
    }
    return 0;
}