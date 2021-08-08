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




void solve(long long int arr[],long long int n,long long int k)
{
    sort(arr,arr+n);
    long long int result=arr[n-1]-arr[0];
    long long int i,maxE,minE;
    i=1;
    while(i<n){
        if(arr[i]>=k){
            maxE=max(arr[i-1]+k,arr[n-1]-k);
            minE=min(arr[0]+k,arr[i]-k);

            result=min(result,maxE-minE);
           
        }
         i++;

    }
    cout<<result;
}
	






int main(){
    fast;
    int t = 1;
    long long int n,i;
    cin>>n;
    long long int k;
    cin>>k;
    long long int a[n];
    for (i=0;i<n;i++){
        cin>>a[i];
    }
    while(t--){
    	solve(a,n,k);
    }
    return 0;
}
