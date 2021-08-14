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

    vector<string>mp;
    vector<string>mp2;
    int i;
    int ma=0;

	for(i=1;i<s.size();i++){
        string k=s.substr(0,i);
        mp.push_back(k);
        mp2.push_back(s.substr(s.size()-i,-1));
        }
        for( i=0;i<mp.size();i++){
            if(mp[i]==mp2[i]){
                ma=max(ma,i+1);

            }
        }

        cout<<ma<<endl;
        
}

void solve_another(string s){
    vector<string>mp;
    vector<string>mp2;
    int i;
    int ma=0;
    string k="";
    for(i=0;i<s.size()-1;i++){
        k=k+s[i];
        mp.push_back(k);
    }
    
    string j="";
    for(i=s.size()-1;i>0;i--){
        j=s[i]+j;
        mp2.push_back(j);
    }

    for( i=0;i<mp.size();i++){

        cout<<mp[i]<<" "<<mp2[i]<<endl;
            if(mp[i]==mp2[i]){
                ma=max(ma,i+1);

            }
        }

cout<<ma<<endl;
    

}

void solve_next(string s){

   int n=s.size();
    int lps[n];
    lps[0]=0;
    int i=1;
    int len=0;
    while(i<n){

        if(s[i]==s[len]){
            len++;
            lps[i]=len;
            i++;
        }
        else if(len!=0){
                len=lps[len-1];
            }

        
        else{
            lps[i]=0;
            i++;
        }
    }

    int res= lps[n-1];
    cout<<res<<endl;
    int k= (res > n/2)?res/2:res;
    cout<<k;

}




signed main(){
    fast;
    int t = 1;
    string s;
    cin >> s;
   
    while(t--){
    	solve_another(s);
    }
    return 0;
}
