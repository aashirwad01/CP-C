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




void solve(vector<int>&v,int n,int a,int b)
{
    cout<<v.size()<<endl;
   
    int i=0;int j=n-1;int k=0;
    
    for(i=0;i<=j;){
       
       if(v[i]<a){
           swap(v[i++],v[k++]);
           
       }
       else if(v[i]>b){
            
           swap(v[i],v[j--]);
       }
           else{
               i++;
           }
           

           
    }
    
    for(auto x:v){
        cout<<x<<" ";
    }





	
}




int main(){
    fast;int n;
    int t = 1;
    cin >> n;
    vector<int>v;
    int x;
    for(int i=0;i<n;i++){
        cin>>x;
        v.push_back(x);
    }
    int a ,b;
    cin>>a>>b;
    while(t--){
    	solve(v,n,a,b);
    }
    return 0;
}
