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
    int n=s.size();
    int j=1;
   
    set<string>st;
   

    for( int i=0;i<n;){
        
       if(j==i+1){
         string a;
           a=s[i];
           
           st.insert(a);
          
       }
       
       if(j<n){
            
            string a;
            a=s[i];
           string b;
           b=s[j];
           a.append(b);
          
            st.insert(a);
        
           
       j++;
       }
       if(j==n){
           i=i+1;
           j=i+1;
       }
      
    }

    st.insert(s);
   

    for(auto it:st){
        cout<<it<<" ";
    }
	
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
