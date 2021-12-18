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




void solve(int r,int c,int ar[10][10]  )
{
    int startRow=0,endRow=r-1;
    int startCol=0,endCol=c-1;

    while(startRow<=endRow){

        //print startrow from startcol to endcol
        for(int j=startCol;j<=endCol;j++){
            cout<<ar[startRow][j]<<" ";
        }
        startRow++;

        // print end col from startrow to endrow
        for(int i=startRow;i<=endRow;i++){
            cout<<ar[i][endCol]<<" ";
        }
        endCol--;

        //print endrow from endcol to startcol
        //make sure it is printed if endrow > startrow
        if(endRow>startRow){
            for(int j=endCol;j>=startCol;j-- ){
            cout<<ar[endRow][j]<<" ";
        }
        endRow--;
        }
        

        //print startcol from endrow to startrow
        //make sure it is printed if startcol < endcol
        
        if(startCol<endCol){
            for(int i=endRow;i>=startRow;i--){
            cout<<ar[i][startCol]<<" ";
        }
        startCol++;
    }

        }
        
}



signed main(){
    fast;
    int t = 1; 
    int r,c;
    cin >>r>>c;
    int a[10][10];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>a[i][j];
        }
    }
    
    while(t--){
    	solve(r,c,a);
    }
    return 0;
}
