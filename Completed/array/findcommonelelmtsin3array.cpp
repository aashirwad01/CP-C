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




void solve(int a[],int b[],int c[],int n1,int n2,int n3)
{
map<int,int>mp;
int i;
for(i=0;i<n1;i++){
       mp[a[i]]=1;
       
    }
    
    for(i=0;i<n2;i++){
        
        if(mp[b[i]]==1)
        {mp[b[i]]=2;}
       
    }
   
    for(i=0;i<n3;i++){
       
      if(mp[c[i]]==2){mp[c[i]]=3;}
    }
   
  int flag=0;
   vector<int>v;

    for (auto it = mp.begin();it!=mp.end();it++)
   {
       if(it->second==3)
       {flag=1;v.push_back(it->first);}
       

   }
   if(flag==0){
       v.push_back(-1);
   }

   for(auto x:v){
       cout<<x<<" ";
   }
   

	
}




int main(){
    fast;int n1,n2,n3;
    int i;
    int t = 1;
    cin >> n1>>n2>>n3;
    int a[n1];
    int b[n2];
    int c[n3];
    for(i=0;i<n1;i++){
        cin>>a[i];

    }
    for(i=0;i<n2;i++){
        cin>>b[i];

    }
    for(i=0;i<n3;i++){
        cin>>c[i];

    }

    while(t--){
    	solve(a,b,c,n1,n2,n3);
    }
    return 0;
}
