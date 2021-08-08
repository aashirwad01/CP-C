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
    vector<int>ar;
    int i;
    for(i=0;i<n;i++){
        ar.push_back(a[i]);
    }

    sort(ar.begin(),ar.end());
    int s;s=0;int m;
    for(i=0;i<n;i++){
        auto k=find(ar.begin(),ar.end(),a[i]);
        s=s+distance(ar.begin(),k);
        ar.erase(k);
      
        
       
    }
    cout<<s<<endl;
	
}

void solve_notbetter(int n,int a[]){
    int i;int j;int k;k=0;
    for (i=0;i<n;i++){
        j=i+1;

        while(j<n)
        {
            if(a[j]<a[i] && j<n)
            {
                k++;
            }
            j++;

        }
       

    }
    cout<<k;

}







int main(){
    fast;
    int n;
    int t = 1;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    while(t--){
    	solve(n,a);
    }
    for(int i=0;i<n;i++){
        cout<<a[i];
    }
    return 0;
}
