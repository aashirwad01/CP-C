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




void solve(int r,int c , int ar[10][10])
{
// break the problem of rotation ino subproblems to be solved
// transpose then 
// mirror image along the middle 
int swap=0;
for(int i=0;i<r;i++){
    for(int j=i;j<c;j++){
        if(i!=j){
            swap = ar[i][j];
            ar[i][j]=ar[j][i];
            ar[j][i]=swap;
        }
    }
}
cout<<"Transpose"<<endl;
for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<ar[i][j]<<" ";
        }
        cout<<endl;
    }
// mirror image along the middle

for( int i=0;i<r;i++){
    for(int j=0;j<(int)c/2;j++){
        swap =ar[i][j];
        ar[i][j]=ar[i][c-j-1];
        ar[i][c-j-1]=swap;
        
    }
}
cout<<"Mirror Image"<<endl;

for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<ar[i][j]<<" ";
        }
        cout<<endl;
    }



    
}



signed main(){
    fast;
    int t = 1; 
    int r,c;
    cin >>r>>c;
   int ar[10][10];
   
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>ar[i][j];
        }
    }
    
    while(t--){
    	solve(r,c,ar);
    }
    return 0;
}
