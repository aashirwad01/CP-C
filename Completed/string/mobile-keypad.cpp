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




void solve(string s){
    string seq[]={ "2"  ,"22" ,"222" ,
                    "3" ,"33","333",
                    "4" ,"44","444",
                    "5" ,"55","555",
                    "6" ,"66","666",
                    "7","77" ,"777","7777",
                    "8" ,"88","888",
                    "9","99" ,"999","9999",


    };

    string p="";
    int n=s.size();

    for(int i=0;i<n;i++){
        if(s[i]==' '){
            p=p+"0";
        }
        else {
            int pos=s[i]-'a';
            p=p+seq[pos];
        }
    }

    cout<<p;
	
}




signed main(){
    fast;
    string s;
    int t = 1;
    cin >> s;
    while(t--){
    	solve(s);
    }
    return 0;
}
