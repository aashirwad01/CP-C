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




void solve(string s,string t)
{
    map<char,int>m1;
    map<char,int>m2;
    int n=s.size();
    int m=t.size();
  int re=0;

    for( int i=0;i<s.size();i++){
        m1[s[i]]++;
    }
    for( int i=0;i<t.size();i++){
        m2[t[i]]++;
    }
    
    
  
     
   
    if(n>m){
        for( int i=0;i<n;i++){
           if(m2.find(s[i])!=m2.end()){
               if(m2[s[i]]!=m1[s[i]]){
                   re++;
                   cout<<s[i];
               }
           }
           else{
               re++;
               cout<<s[i]<<"o ";
           }
        }


    }
    else {
        
        for( int i=0;i<m;i++){
           
           if(m1.find(t[i])!=m1.end()){
             
               if(m2[t[i]]!=m1[t[i]]){
                   
                   re++;
                   cout<<s[i]<<" ";
               }
           }
           else{
               re++;
               cout<<s[i]<<"o ";
           }
        }

    }

	cout<<re;
}



int solve_another(string s,string t, int n,int m){
    
    
          if(n==0){
              return m;
          }  
          if(m==0){
              return n;
          }

if(s[n-1]==t[m-1]){

    return solve_another(s,t ,n-1,m-1);

}

return 1+ min(min(solve_another(s,t,n,m-1),solve_another(s,t,n-1,m)),solve_another(s,t,n-1,m-1));

        
    }

void solve_again(string s , string t, int n , int m){
    int dp[n+1][m+1];

    for( int i=0;i<=n;i++){
        for( int j=0;j<=m;j++){

            if( i==0){
                dp[i][j]=j;
            }
            else if(j==0){
                dp[i][j]=i;
            }

            else if(s[i-1]==t[j-1]){
                dp[i][j]=dp[i-1][j-1];
            }
            else 
            dp[i][j]=1+ min(min(dp[i][j-1],dp[i-1][j]),dp[i-1][j-1]);

        }
    }

    cout<<dp[n][m];
}




signed main(){
    fast;
    string s;
    string s1;
    int t = 1;
    cin >> s;
    cin>>s1;

    int n =s.size();
    int m= s1.size();

    while(t--){
    	solve_again(s,s1,n,m);
    }
    return 0;
}
