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




void solve(string s, string s1){
    int n=s.size();
    int m=s1.size();
   
    int lc[n+1][m+1];
    int i,j;
    for(i=0;i<=n;i++){
        for(j=0;j<=m;j++){

            if(i==0 || j==0){
                lc[i][j]=0;
            }
            else if(s[i-1]==s1[j-1]){
                lc[i][j]=1+lc[i-1][j-1];
            }
            else {
                lc[i][j]=max(lc[i-1][j],lc[i][j-1]);
            }
        }
       
    }

    cout<<lc[n][m];

	
}

int solve_recur(int n,int m,string s,string s1){
    

   

    if(m==0 || n==0){
        return 0;
    }
    else if(s[n-1]==s1[m-1]){
        return 1+ solve_recur(n-1,m-1,s,s1);
    }
    else {
        return max(solve_recur(n-1,m,s,s1),solve_recur(n,m-1,s,s1));
    }
}




signed main(){
    fast;
    int t = 1;
    string s;
    string s1;
    cin >> s;
    getline(cin>>ws,s1);
    int n=s.size();
    int m=s1.size();
    
    while(t--){
    	// solve(s,s1);
        cout<<solve_recur(n,m,s,s1);
    }
    return 0;
}
