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




void solve(int a[],int n,int k)
{
    sort(a,a+n);
    int l=0;
    int h=n-1;
    while(a[h]+a[l]>=k){
        h--;
    }
    
    
    for(int i=0;i<=h;i++)
{
    int j=i+1;
    int l=h-1;
    while(j<l){
        if(a[j]+a[l]==k-a[i]){
            cout<<"Yes";break;
        }
        else if(a[j]+a[l]+a[i]>k){
            l--;
        }
        else{
            j++;
        }
    }
}    
    
    


	
}

void solve_another(int a[],int n,int k){
    int i;int j;int s;
   sort(a,a+n);
  for(i=0;i<n;i++){
      for(j=i+1;j<n;j++){
          
          s=lower_bound(a+j+1,a+n,k-a[i]-a[j])-a;
         cout<<k-a[i]-a[j]<<" "<<a[s]<<endl;
          if(a[s]==(k-a[i]-a[j])){
              cout<<"Found"<<endl;break;
          }

      }
  }

}




int main(){
    fast;
    int n;
    int k;
    int t = 1;
    cin >> n;
    cin>>k;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    while(t--){
    	solve(a,n,k);
    }
    return 0;
}
