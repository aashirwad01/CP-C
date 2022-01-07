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

// lucky no index
// any no which is only made up of 4 and 7 is called lucky no
// so 4,7,44,47,74,77,444,447,474,477 .... are lucky nos
// first find all the nos with lesser digits than the no 
// 2^0 + 2^1 +2^2 .... i.e GP series so sum of no of all the lucky nos less than is 2(2^ n-1 -2).
// then we need to find no of lucky nos of same size as no to know it's position
// so to ans 2^pos is added if digit is 7 

void solve(char a[20],int n)
{
    int ans=0;
    ans = 1<<(n-1)-2;
    for(int i=n-1;i>=0;i--){
        if(a[i]=='7'){
            ans+=(1<<(n-i-1));
        }
    }

    cout<<ans+1<<endl;
    

    
   
}




int  main(){
   
   char a[20];int n;
   cin>>a;
   n=strlen(a);
   solve(a,n);
    return 0;
}
