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




void solve()
{ 
    long long int n;
    cin>>n;
	long long int arr[n];
    long long int i;
    for (i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    long long int min,max;
    if (n%2==0)
    {
        if (arr[0]<=arr[1])
        {
        min=arr[0];
        max=arr[1];
        }
        else{
        max=arr[0];
        min=arr[1];   
        }
        i=2;
    }
    else
    {
       if (arr[0]<=arr[1])
        {
        min=arr[0];
        max=arr[1];
        }
        else{
        max=arr[0];
        min=arr[1];   
        }
        i=1;  
    }
for (;i<n-1;i=i+2)  
{
    if(arr[i]>arr[i+1])
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
        if(arr[i+1]<min)
        {
            min=arr[i+1];
        }
    }
    else{
        if(arr[i+1]>max)
        {
            max=arr[i+1];
        }
        if(arr[i]<min)
        {
            min=arr[i];
        }

    }
}
cout<<"min = "<<min<<","<<"max = "<<max;
}




int main(){
    fast;
    int t = 1;
    cin >> t;
    while(t--){
    	solve();
    }

    #ifndef ONLINE_JUDGE
        cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif
   
    return 0;
}
