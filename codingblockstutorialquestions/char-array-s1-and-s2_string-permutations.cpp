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




bool solve(char* s1, char *s2)
{
    int f1[256]={0};
    if(strlen(s1)!=strlen(s2)){
       
        return false;
    }

for(int i=0;i<strlen(s1);i++){
    f1[s1[i]-'a']++;
}
for(int i=0;i<strlen(s2);i++){
   
    f1[s2[i]-'a']--;
}

for(int i=0;i<256;i++){
   
    if(f1[i]!=0){
        
        return false;
    }
   
}
return true;

	
}




signed main(){
    fast;
    int t = 1;
    char s1[100];char s2[100];
    cin.getline(s1,100);
    cin.getline(s2,100);
    cin >> t;
    while(t--){
    	bool val = solve(s1,s2);
        (val==0)?cout<<"Not Permutation":cout<<"Is permutation";
    }
    return 0;
}
