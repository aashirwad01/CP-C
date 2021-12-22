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




void solve(int r,int c )
{
    char ar[r][c] ;
    int lr=r;int lc=c;
    int sr=0;int sc=0;
    char val='X';
    while(sr<r && sc<c){
        //first row
        for(int j=sc;j<c;j++){
            ar[sr][j]=val;
        }
        sr++;
        //last col

        for(int i=sr;i<r;i++){
            ar[i][c-1]=val;
        }
        c--;

        //last row
        if(sr<r){
            for(int j=c-1;j>=sc;j--){
            ar[r-1][j]=val;
        }
        r--;

        }
        
        //first col
        if(sc<c){
            for(int i=r-1;i>=sr;i--){
            ar[i][sc]=val;
        }
        sc++;
        }

        val =(val=='X')?'0':'X';
        
    }

    for(int i=0;i<lr;i++){
        for(int j=0;j<lc;j++){
            cout<<ar[i][j]<<" ";
        }
        cout<<endl;
    }
}



signed main(){
    fast;
    int t = 1; 
    int r,c;
    cin >>r;
    c=r;
   
    // for(int i=0;i<r;i++){
    //     for(int j=0;j<c;j++){
    //         cin>>a[i][j];
    //     }
    // }
    
    while(t--){
    	solve(r,c);
    }
    return 0;
}
