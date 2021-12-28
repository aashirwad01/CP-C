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


//sorting in descending the values and if values are same then sort using to name
// take a map to get the values as input as map cannot be sorted by any values
// pass the map in the function and then store the map values in vector of pairs
// each pair has in it string and int 
// within the sort function compare function is passed 
// compare function two pairs are passed, they compare values according to second value and if second value is same then lexicographicl sorting of the names


bool cmp(pair<string,int>&a , pair<string,int>&b){
    if(a.second == b.second){
        return a.first<b.first;
    }
    else{
        return a.second>b.second;
    }
}

void solve(map<string,int>mp,int minvalue)
{
    vector<pair<string,int>>A;

    for(auto it:mp){
        if(it.second>=minvalue){
            A.push_back(it);
        }
        
    }
    sort(A.begin(),A.end(),cmp);

    for(auto x:A){
        cout<<x.first<<" "<<x.second<<endl;
    }

    
	
}



signed main(){
    fast;
    int t = 1;
    int n;
    int minvalue;
    cin>>minvalue;
    cin >> n;

    map<string , int>mp;
    string val;
    for(int i=0;i<n;i++){
        cin>>val;
        cin>>mp[val];
    }
    while(t--){
    	solve(mp,minvalue);
        
       
    }
    return 0;
}
