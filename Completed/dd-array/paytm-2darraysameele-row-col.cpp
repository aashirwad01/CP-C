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




void solve(int  **arr, int n){
    int j=0;
   
    bool a[n]={0};
    int b[n]={0};
    int i;
    int f=0; 
    


   
    for(i=0;i<n;i++){
        f=0;
        for(j=0;j<n;j++){

            
            
            if(arr[i][0]!=arr[i][j] && i!=j){
                
                f=1;break;
            }
            
           }
           
         
            if(f==0){
                
                
                a[i]=1;
                f=0;
                
            }

    }

  
    f=0;

    for(j=0;j<n;j++){
        f=0;
        for(i=0;i<n-1;i++){
            if(arr[0][j]!=arr[i][j] && i!=j){
              
                f=1;break;
            }
           }
            if(f==0){
                b[j]=1;
                f=0;
                
            }

    }

    for(int k=0;k<n;k++){
        
            if(a[k]&&b[k]){
                 cout<<k;break;
            }
           
           
        
    }




	
}




int main(){
    fast;
    int t = 1;
    int r,c;
  cin>>r>>c;
  int **mat =new int *[r];
 
  for( int i=0;i<r;i++){
      mat[i]=new int[c];
  }
  
  for(int i=0;i<r;i++){
      for(int j=0;j<c;j++){
          cin>>mat[i][j];
      }
  }

  

    while(t--){
    	solve(mat,r);
    }
    return 0;
}
