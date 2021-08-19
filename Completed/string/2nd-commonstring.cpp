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



void solve(string arr[],int n){
    map<string,int>mp;

    for(int i=0;i<n;i++){
        mp[arr[i]]++;
    }

    int k=0;
    string s;

for(auto itr=mp.begin();itr!=mp.end();++itr){

    if(itr->second > k){
        k=itr->second;
        s=itr->first;
    }
    
}
int k1=0;
string s1;

for(auto itr=mp.begin();itr!=mp.end();++itr){

    if(itr->second > k1 && itr->second!=k){
        k1=itr->second;
        s=itr->first;
    }
    
}
cout<<s;

    
}



signed main(){
    fast;
    int t = 1;
    int n;
    cin >> n;
    string arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   
    while(t--){
    	solve(arr,n);
    }
    return 0;
}
