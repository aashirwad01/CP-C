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
    unordered_map<int, int> m;
    for(int i = 0; i < n; i++)
        m[a[i]]++;
    int count = 0;
    for(auto i : m)
    {
        if(i.second > n / 2)
        {
            count =1;
            cout << "Majority found :- " << i.first<<endl;
            break;
        }
    }
    if(count == 0)
        cout << "No Majority element" << endl;
}
	





signed main(){
    fast;
    int t = 1;
    int n;
    cin >> n;
    int ar[n];
    for(int i=0;i<n;i++){
        cin>>ar[i];

    }
    while(t--){
    	solve(ar,n);
    }
   
    return 0;
}
