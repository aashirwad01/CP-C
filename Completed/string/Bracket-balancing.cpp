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




void solve(string s){
    int re=0;
    int l=0;
    int r=0;
    int n=s.size();
    if(n%2!=0){
        cout<<"-1";return ;
    }

	for(int i=0;i<n;i++){
        if(s[i]=='{'){
            l++;
        }
        else if(l==0){
            r++;
        }
        else{
            l--;
        }

    }

    re=ceil(l/2)+ceil(r/2);
    cout<<re;
    


}

void solve_another(string s){
    int n=s.size();

    if(n%2!=0){
        cout<<"-1";return;
    }
    stack<char>st;

    for(int i=0;i<n;i++){

        if(s[i]=='}' && !st.empty()){

            if(st.top()=='{'){
                st.pop();
            }
            else{
                st.push(s[i]);
            }
        }
        else{
            st.push(s[i]);
        }
    }

    int re =st.size();


    int f=0;
    while(!st.empty() && st.top()=='{'){
        st.pop();
        f++;
        
    }

    cout<<(re/2)+ (f%2);

}


signed main(){
    fast;
    string s;
    int t = 1;
    cin >> s;
    while(t--){
    	solve_another(s);
    }
    return 0;
}
