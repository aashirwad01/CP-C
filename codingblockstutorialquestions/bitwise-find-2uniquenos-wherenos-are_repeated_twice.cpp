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

// 2 unique nos in a list of nos
// say 2 1 3 5 1 6 3 2 no are there so here
// 5 and 6 are unique
// step 1 : find xor of all the nos that will leave you with 5^6
// step 2 : find right most 1 bit in 5^6 and then compare with 5 or 6 by creating a mask it will have come from either one of the two
// step 3: after finding one no it is easy just take 6 of the no with 5^6 
void solve(int ar[20],int n) 
{
    int x_value=0;
    for(int i=0;i<n;i++){
        x_value=x_value^ar[i];
    }

    int temp = x_value;
    int c=0;
    while(temp){
        if(temp&1){
            break;
        }
        c++;
        temp=temp>>1;
    }
    int mask=1<<c;
    int a=0;int b=0;
    for(int i=0;i<n;i++)
    {
        if((mask&ar[i])!=0){
            a=a^ar[i];
        }

    }
    b=x_value^a;

    cout<<a<<" "<<b<<endl;
   


    
   
}




int  main()
{
    int ar[20];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    solve(ar,n);
   
    return 0;
}
