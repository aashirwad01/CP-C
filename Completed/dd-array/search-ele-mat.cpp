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




bool solve(vector<vector<int>>& mat,int k  ){
    int r=mat.size();
    int c=mat[0].size();
    int j=0;int f=0;
	for(int i=0;i<r*c;i++){
        if(j%c==0 && i!=0){
            j=0;f=f+1;
        }
        if(mat[f][j++]==k){
           return 1;
        }
        



    }
    return 0;
}

bool solve_better(vector<vector<int>>& mat,int k  ){
    int r=mat.size();
    int c=mat[0].size();
    int j=0;int f=0;
    int l=0; int h=r*c -1;
	for(int i=0;i<r*c;i++){
         int mid = (l+h)/2;
        
       
        if(mat[mid/c][mid%c]==k){
            return 1;
        }
        else if(mat[mid/c][mid%c]<k){
             l=mid+1;
           

        }
        else{
            h=mid-1;
        }
       
        



    }
    return 0;
}




int main(){
    fast;
    int t = 1;
    int r,c;int x;int k;
  cin>>r>>c;
  vector<vector<int>> mat(r);
  cin>>k;
  
  for(int i=0;i<r;i++){
      for(int j=0;j<c;j++){
          cin>>x;
          mat[i].push_back(x);
      }
  }

  

    while(t--){
    	cout<<solve_better(mat,k);
    }
    return 0;
}
