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




void solve(string s,string m){
    int f=0;
    for(int i=0;i<s.length();i++){
        if(s[i]==m[i] && s[i]!='?' && s[i]!='*'){
            cout<<s[i]<<m[i]<<"1"<<endl;
            continue;

        }
        else if(s[i]=='?'){
            cout<<s[i]<<m[i]<<"2"<<endl;
            continue;
        }
        else if(s[i]=='*' && i==s.length()-1){
            cout<<s[i]<<m[i]<<"3"<<endl;
            continue;
        }
        else if(s[i]=='*'){
            cout<<s[i]<<m[i]<<"4"<<endl;
            continue;
        }

        else{
            cout<<s[i]<<m[i]<<"5"<<endl;
            f=1;
            break;
        }

    }
    if(f==0){
        cout<<"Yes";

    }
    else{
        cout<<"No";
    }
	
}




signed main(){
    fast;
    int t = 1;
    string s;
    string m;
    cin >> s;
    getline(cin>>ws,m);
    while(t--){
    	solve(s,m);
    }
    return 0;
}
