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




void solve(int a[],int n){
    int i;map<int,int>mp;
    for(i=0;i<n;i++){
        mp[a[i]]=1;

    }
    auto it1=(mp.begin());
    advance(it1,1);
    int f=0;int k=INT16_MIN;
    for (auto it=mp.begin(); it!=mp.end();)
{
       
        
        if((it1->first)-(it->first)==1){
            f++;++it;++it1;k=max(k,f);

        }
        else{
            ++it;++it1;k=max(k,f);f=0;
        }
        if(it1==mp.end()){
            break;
        }
        

    }
	cout<<k+1<<endl;
}




int main(){
    fast;
    int n;int i;
    int t = 1;
    cin >> n;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    while(t--){
    	solve(a,n);
    }
    return 0;
}
