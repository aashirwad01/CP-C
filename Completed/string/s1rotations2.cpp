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




void solve(string s1,string s2){

    size_t f= s2.find(s1[0]);
    f++;
    // cout<<s2.size()<<endl;

    for( int i=1;i<s1.size();){

        if(f==s2.size()){
            f=0;
        }
        // cout<<s2[f]<<" "<<s1[i]<<endl;
        if(s2[f]==s1[i]){
            f++;i++;
            continue;
        }
       else {
           cout<<"Not";
           return ;
       }




    }

    cout<<"Yes";

	
}




signed main(){
    fast;
    int t = 1;
   string s1;
   string s2;
   cin>>s1;
   cin>>s2;


   
    while(t--){
    	solve(s1,s2);
    }
    return 0;
}
