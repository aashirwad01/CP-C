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




void solve(int n,string s){
    int l=s.length();
    int a[256]={0};
    int f=0;
    int nd=0;
    set<char>st;
    for(int i=0;i<l;i++){
        a[s[i]]++;
        if(a[s[i]]==1){
            f++;
        }
        if(f>n){
            st.insert(s[i]);
            nd++;
        }

        if(a[s[i]]==2){
            f--;
            a[s[i]]=0;
        }

    }

    cout<<st.size();

	
}




signed main(){
    fast;
    int t = 1;
    int n;
    cin >> n;
    string s;
    cin>>s;
    while(t--){
    	solve(n,s);
    }
    return 0;
}
