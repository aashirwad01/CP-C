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




void solve(int n,int a[]){
    int i;int s=0;int k;
    for(i=0;i<n;i++){
       
       
      if(abs(s+a[i])>abs(a[i])){s=0;s=s+a[i];}
      else{s=s+a[i];}
      cout<<s<<endl;
      if(s==0){cout<<"Yes"<<endl;break;}
       
      
       
       
    }
    


}
struct Node{
    int value=0;
};
void solve_better(int n,int a[]){
    int i;
   for(i=1;i<n;i++){
       a[i]=a[i]+a[i-1];
   }

   map<int,Node>mp;
   for(i=0;i<n;i++){
       mp[a[i]].value+=1;
       if(mp[a[i]].value==2){cout<<"Yes";break;}
   }
   
  
    

}




int main(){
    fast;int n;int i;
    int t = 1;
    cin >> n;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    while(t--){
    	solve_better(n,a);
    }
    return 0;
}
