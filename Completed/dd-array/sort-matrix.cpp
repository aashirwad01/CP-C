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




void solve(vector<vector<int> > arr, int n){
    int j=0;
    int f=0;
    int a[n*n];
    vector<vector<int>>av(n,vector<int>(n));
    for(int i=0;i<n*n;i++){
        if(j%n==0 && i!=0){
            j=0;
            f=f+1;
        }
        if(j<n && f<n){
            a[i]= (arr[f][j++]);
        }

    }
    sort(a,a+n*n);
    
    int p=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            av[i][j]=(a[p]);
            p++;
        }
    }

for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<av[i][j];
        }
        cout<<endl;
    }

	
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
    	solve(mat,r);
    }
    return 0;
}
