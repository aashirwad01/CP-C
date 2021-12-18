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





void staircase(int r,int c,int ar[][4],int key)
{
    int i=0,j=c-1;

    while(i<r && j>=0){
        if(ar[i][j]==key){
            cout<<"Element found at Row "<<i<<" Column "<<j<<endl;
            return;
        }
        else if(ar[i][j]>key){
            j--;
        }
        else{
            i++;
        }
    }
    cout<<"Element not found"<<endl;
    return;

}



signed main(){
    fast;
    int t = 1; 
    int r;
    cin >>r;
    int key;
    cin>>key;
    const int c=4;
    int a[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>a[i][j];
        }
    }
    
    while(t--){
    	
        staircase(r,c,a,key);
    }
    return 0;
}
