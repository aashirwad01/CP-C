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




void solve(vector<vector<int> > arr, int n, int m)
{
    int ma=INT16_MIN;int f=0;int in;
	for(int i=0;i<n;i++){
        
        for(int j=0;j<m;j++){
           
            if(arr[i][j]==1){
                f++;
                
            }

        }
        
        if(ma<f){
            ma=f;
            in =i;
        }
        f=0;
      
     
        
    }
    
    cout<<ma<<" "<<in;
}




int main(){
    fast;
    int t = 1;
    int r,c;int x;int k;
  cin>>r>>c;
  vector<vector<int>> mat(r);
  
  
  for(int i=0;i<r;i++){
      for(int j=0;j<c;j++){
          cin>>x;
          mat[i].push_back(x);
      }
  }

  

    while(t--){
    	solve(mat,r,c);
    }
    return 0;
}