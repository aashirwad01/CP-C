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




void solve(int n,vector<string>s, string f){
    map<string,int>mp;
    int a=0;
    int b=0;

    for(int i=0;i<n;i++){
        mp[s[i]]++;
    }

    for(int i=0;i<f.size();i++){
        for(int j=i;j<f.size();j++){
            string k=f.substr(i,j-i+1);
            cout<<k<<endl;
            if(mp.find(k)!=mp.end()){

                auto it=mp.find(k);
                b=b+it->first.size();
                a=a+(j-i+1);
                
               cout<<a<<" "<<b<<endl;
                i=j+1;
                
            }

            
        }
    }

if(a==f.size()){
    cout<<"Yes";
}
else {
    cout<<"No";
}
	
}




signed main(){
    fast;
    int n;
    int t = 1;
    cin >> n;
    vector<string>s;
    for( int i=0;i<n;i++){
        string k;
        cin>>k;
        s.push_back(k);
    }
    string f;
    cin>>f;
    

   
    while(t--){
    	solve(n,s,f);
    }
   
    return 0;
}
