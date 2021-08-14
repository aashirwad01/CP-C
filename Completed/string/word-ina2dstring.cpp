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



int check(int i,int j,string pa,string s[],int m,int n,int k)
{
    int f=0;
  
    
    if(i<n && j<m && i>=0 && j>=0 && pa[k]==s[i][j] ){

        char a=pa[k];
        k=k+1;

        s[i][j]=0;

        if(pa[k]==0){
            f=1;
        }          
        
         else{
               cout<<f<<i<<j<<s[i][j]<<endl;
               
               
              
        

       
             f+=check(i,j+1,pa,s,m,n,k);
        
       
       
            
        
      
           f+=check(i,j-1,pa,s,m,n,k);
         f+=check(i+1,j,pa,s,m,n,k);
          f+=check(i-1,j,pa,s,m,n,k);

         }
       
                     
     s[i][j]=a;

    }
   
    
    return f;

}

int solve(int m,int n,string s[],string pat){
    
    int i,j;
    
    int f=0;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){

                // cout<<flag<<"flag"<<endl;
                f+=check(i,j,pat,s,m,n,0);
                
                
                
            
                     
            
        }
    
    }
    
    return f;
    
	
}




signed main(){
    fast;
    int t = 1;
    int n;int m;
    cin>>n>>m;
   string s[n];
    string pat;
    cin>>pat;
    for( int i=0;i<n;i++){
        cin>>s[i];
    }
    
    
    while(t--){
    	cout<<solve(m,n,s,pat);
    }
    return 0;
}
