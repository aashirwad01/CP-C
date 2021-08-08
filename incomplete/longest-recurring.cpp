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

int i=0;
int j=1;
int m=INT16_MIN;
    while(i<s.size())
    {
        if(j>=s.size()){
            i=i+1;
            j=i+1;
        }
        if(s[i]==s[j]){
            j++;
        }
        else if(s[i]!=s[j]){
           m= max(m,j-i-1);
           i=i+1;
           j=i+1;

        }

    }

    cout<<m<<endl;
	
}

void solve_another(string s){

    int n= s.size();
    int lar[n][n];

    for(int i=0;i<=n;i++)
        for(int j=0;j<=n;j++)
            lar[i][j]=0;
            
        
    

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            
            if(s[i-1]==s[j-1] && i!=j){
                lar[i][j]=1+lar[i-1][j-1];
            }

            else {
                lar[i][j]=max(lar[i][j-1],lar[i-1][j]);
            }
            
        }
    }

    cout<<lar[n][n];


}




signed main(){
    fast;
    string s;
    int t = 1;
    cin >> s;
    while(t--){
    	solve_another(s);
    }
   
    return 0;
}
