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




void solve(string s,string s1){
    int sa[256]={0};
    int sp[256]={0};
    
    int n=s1.size();
    for(int i=0;i<n;i++){
        sp[s1[i]]++;
    }
   int n=s.length();
   int n2=s1.length();
    int ans=INT16_MAX;

    int i=0;int j=-1;
    
int count =0;
    for(int k=0;k<n;k++){

        sa[s[k]]++;
        if(sa[s[k]]<=sp[s[k]]){
            count++;

        }
        if(count ==n2){
            
        }


       

            
        }





        

//  cout<<ans<<s.substr(j,ans);

    }

   
	





int main(){
    fast;
    int t = 1;
    string s;
    string s1;
    cin >> s;
    cin>>s1;
    while(t--){
    	solve(s,s1);
    }
    return 0;
}
