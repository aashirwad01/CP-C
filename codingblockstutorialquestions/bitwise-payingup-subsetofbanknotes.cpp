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

// paying up
// given n amd m 
// n is n no of bank notes and m is sum and we have to see if 
// any subset from n notes can sum upto m
int solve(int ar[20],int n,int m)
{
    
    int range=(1<<n)-1;
  
    for(int i=0;i<=range;i++){

        int no=i;
        int j=0;
        int s=0;
       
        while(no>0){
            s+=(no&1)?ar[j]:0;
            j++;
            no=no>>1;
           

        }
       
        if(s==m){
            return 1;
        }
        else {
            s=0;
        }
        
        
        
    }

    return 0;

    
   
}




int  main(){
   
   int ar[20];
   int n;
   cin>>n;

   int m;
   cin>>m;
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    if(solve(ar,n,m)==1){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    };

    return 0;
}
