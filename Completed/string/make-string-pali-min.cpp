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

bool chepal(string s){
    int i=0;
    int n=s.size();
   
    while(i<n){
        if(s[i]!=s[n-i-1]){
            return 0;
        }
        else{
            i++;
        }
    }
    return 1;
}


void solve(string s){
int n=s.size();
for(int i=0;i<n;i++){
    if(chepal(s.substr(0,n-i))){
        cout<<i;
        break;

    }
}
	
}


void solve_maybetter(string s){
    vector<string>v;
    int n=s.size();
    string te="";
    for(int i=0;i<n;i++){
        te+=s[i];
        v.push_back(te);

    }
int m=0;

    for(int i=v.size()-1;i>=0;i--){
       
        if(chepal(v[i])){
            int l=v[i].length();
            m=max(l,m);

        }

    }
    cout<<n-m;
}

void solve_lpsway(string str){
    
    
    string s="";
    int i=1;
    string reve=str;
    reverse(reve.begin(),reve.end());
    s=str+"$"+reve;
    int n=s.length();
    vector<int>lps(n);
    int len=0;
    lps[0]=0;
    while(i<n){
        if(s[i]==s[len]){
            len++;
            lps[i]=len;
            i++;
        }

        else{
            if(len!=0){
                len=lps[len-1];
            }
            else{
                lps[i]=0;
                i++;
            }
        }
    }

    cout<<str.length()-lps.back();
    

}




signed main(){
    fast;
    int t = 1;
    string s;
    cin >> s;
    while(t--){
    	solve_lpsway(s);
    }
    return 0;
}
