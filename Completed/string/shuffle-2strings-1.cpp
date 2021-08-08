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




void solve(string s1,string s2,string s3)
{
	sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());
    sort(s3.begin(),s3.end());

    int i=0,j=0,k=0;
    

    while(k!=s3.size()){

      
        if(i<s1.size() && s1[i]==s3[k]){
            i++;
        }
        else if(j<s2.size() && s2[j]==s3[k]){
            j++;
        }

        else {
            cout<<"No";return ;
        }
        k++;
    }

    cout<<"Yes";

    

}




signed main(){
    fast;
    int t = 1;
   string s1;
   string s2;
   cin>>s1;
   cin>>s2;
   string s3;
   cin>>s3;


   
    while(t--){
    	solve(s1,s2,s3);
    }
    return 0;
}