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

// if you jump in powers of 2 min no of steps required to reach a level if steps are added
// it's simply no of set bits in binary
// no of set bits is no of 1's in and of n and n-1 ;
void solve(int n)
{
    int count=0;
    while(n){
        count++;
        n=(n & (n-1));
    }

    
   
}

// now say we can reach to the no from two sides i.e forward as weel as backward
// say for example 15 it is easier to get here from 16-1 i.e 2^4 - 2^1 
// step 1: first find the just larger 2^n than the no
// step 2: subtract number from 2^n and then find no of set bits in it.

void solve_forward_back(int n){

    
    int cf=0;
    int temp=n;
    while(temp){
        cf++;
        temp=temp&(temp-1);
    }

    int i=0;
    int no=0;
    while(no<=n){
        no = 1<<i;
        i++;
    }

    int temp2=no-n;
    int cb=0;
    while(temp2){
        cb++;
        temp2=temp2&(temp2-1);

    }
    

    cout<<min(cf,cb+1)<<" min";

}




int  main(){
   
   int level;
//    cin>>level;
   solve_forward_back(27);
    return 0;
}
