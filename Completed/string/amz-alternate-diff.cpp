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




void solve_partial_wrong(string s){
    char ar[s.size()];
    int n=s.size();
    for( int i=0;i<n;i++){
        ar[i]=s[i];
    }
    int i;
    int j=i+1;

    for(i=1;i<n;){
        if(ar[i]!=ar[i-1]){
            i++;j=i+1;

        }
        else{
            if(ar[i]!=ar[j]){
                swap(ar[i++],ar[j++]);
            }
            else{
                j++;
            }
        }
    }

    int f=0;

    for(int i=0;i<n;i++){
        if(ar[i]==ar[i+1]){
            cout<<"No";
            f=1;
            break;
        }

        cout<<ar[i]<<" ";
    }
    cout<<endl;

    if(f==0){
        cout<<"Yes";
    }

	
}

string solve(string s){
    int ar[26]={0};
    int n=s.size();
    for(int i=0;i<n;i++){
        ar[s[i]-'a']++;
    }
    char ch_max='a'+(max_element(ar,ar+26)-ar);
    int max_cn=ar[ch_max-'a'];

    if(max_cn>((n+1)/2)){
        cout<<"No";
        return "";
    }
    string res(n,' ');
    int idx=0;

    while(max_cn--){
        res[idx]=ch_max;
        idx+=2;

    }

    ar[ch_max-'a']=0;

    for(int i=0;i<26;i++){
        while(ar[i]--){
            idx=(idx>n)?1:idx;
            res[idx]='a'+i;
            idx+=2;
        }
    }
int f=0;
   for(int i=0;i<n;i++){
       if(res[i]==res[i-1]){
           cout<<"No";
           f=1;
           break;
       }
    //    cout<<res[i]<<" ";
   }

   if(f==0){
       cout<<"Yes";
   }
   cout<<endl;
   return res;

}




signed main(){
    fast;
    int t = 1;
    cin >> t;
    string s;
    
    while(t--){
        cin>>s;
    	string r=solve(s);
        
    }
    return 0;
}
