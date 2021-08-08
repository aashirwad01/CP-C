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




void solve(long long int n,long long int a[]){
	long long int i,s,k;
     i=1;s=a[0];k=s;
     while(i<n){
         
        k=max(k,a[i]);
        k=max(k,s+a[i]);
        
         
         if(s<0 && s+a[i]>s){
             s=0;
         }
         s=s+a[i];
         i++;
      }
    //   cout<<k<<s;
     cout<<max(k,s)<<endl;
    
}

void maxSubArraySum(long long int size,long long int a[])
{
    long long int max_so_far = INT_MIN, max_ending_here = 0;

    for (long long int i = 0; i < size; i++)
    {
        max_ending_here = max_ending_here + a[i];
        if (max_so_far < max_ending_here)
            max_so_far = max_ending_here;

        if (max_ending_here < 0)
            max_ending_here = 0;
    }
    cout<< max_so_far;
}





int main(){
    fast;
    int t = 1;
    
   
    long long int n;
    cin>>n;
    long long int a[n];
    for (long long int i =0;i<n;i++){
        cin>>a[i];
    }
    while(t--){
    	maxSubArraySum(n,a);
    }
    return 0;
}
