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


//counting sort
//best method if no space complexity and value of n is within  range of input size of array
// O(N) time O(N) space complexity

void solve(vector<int>v)
{
    
int n = v.size();
int freq_n=v[(max_element(v.begin(),v.end()))-v.begin()];
int ar[freq_n+1]={0};

for(int i=0;i<n;i++)
{
ar[v[i]]++;

}
int j=0;

for(int i=0;i<=freq_n;i++)
{
    if(ar[i]!=0){
        while(ar[i]>0){
             v[j]=i;
             ar[i]--;
             j++;
        }
       
    }
    
}

for(auto x:v){
    cout<<x<<" ";
}
    
	
}



signed main(){
    fast;
    int t = 1;
    int n;
    cin >> n;

    vector<int>v;
    int val;
    for(int i=0;i<n;i++){
        cin>>val;
        v.push_back(val);
    }
    while(t--){
    	solve(v);
        
    }
    return 0;
}
