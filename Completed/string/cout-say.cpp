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


string coun(int n , string s="1"){
    if(n==1){
        return s;
    }

    int i=0,j,len=s.size();
    string a="";

    while(i<len){
        j=i;
        while(i<len && s[i]==s[j]){
            i++;
        }
        a=a+ to_string(i-j)+s[j];
    }

    return coun(n-1 , a);




}

void solve(int n){

   string s= coun(n);

    cout<<s<<endl;

	
}




signed main(){
    fast;
    int n;
    int t = 1;
    cin >> n;
    while(t--){
    	solve(n);
    }
    return 0;
}
