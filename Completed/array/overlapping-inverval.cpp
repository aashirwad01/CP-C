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


# define m 2

void solve(int n, int a[][m]){
    int i;

    // for(i=0;i<n;i++){
    //     for(j=0;j<2;j++){
    //         cout<<a[i][j]<<" ";
    //     }
    //     cout<<endl;

vector< pair<int,int> >p;

for(i=0;i<n;i++){
    p.push_back(make_pair(a[i][0],a[i][1]));
   }
   sort(p.begin(),p.end());

    for(i=0;i<n-1;i++){
        if(p[i].second >= p[i+1].first){
            p[i].second=p[i+1].second;
            p.erase(p.begin()+i+1);
        }
    }

for(i=0;i<n-1;i++){
    
    cout<<p[i].first<<" "<<p[i].second<<endl;
     }
     

}
struct Interval{
    int s,e;
};
bool comp(Interval a,Interval b)
{
    return a.s<b.s;
}

void solve_inplace(int n, Interval a[]){
    int i;
    sort(a,a+n,comp);

    for(i=0;i<n-1;i++){
        if(a[i].e>=a[i+1].s){
            a[i].e=a[i+1].e;
            a[i+1].s=a[i].s;
        }
    }

    for(i=0;i<n-1;i++){
        cout<<a[i].s<<" "<<a[i].e<<endl;
    }

    
}





int main(){
    fast;
    int i,j,n;
    int t = 1;
    cin >> n;
    Interval a[n];
    for(i=0;i<n;i++){
        cin>>a[i].s>>a[i].e;
    }

    // for(i=0;i<n;i++){
    //     for(j=0;j<2;j++){
    //         cout<<a[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    while(t--){
    	solve_inplace(n,a);
    }
    return 0;
}
