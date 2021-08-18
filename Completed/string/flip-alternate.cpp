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
    string s1=s;
    string s2=s;
    int f=0;
    for( int i=s.size()-1;i>=0;i--){

        if(s[i]==s[i-1]){

            if(s[i]==0){
                s[i-1]='1';
            }
            else {
                s[i-1]='0';
            }
            f++; 

        }
        
    }

    int a=0;

    for( int i=0;i<=s1.size()-1;i++){

        if(s1[i]==s1[i+1]){

            if(s1[i]=='0'){
                s1[i+1]=1;
            }
            else {
                s1[i+1]='0';
            }
            a++; 

        }
        
    }


    cout<<s1<<" "<<min(f,a)<<a<<f<<endl<<s2;


    
	
}

void solve_another(string s){
    stack<int> st;
    int f=0;

    for(int i=0;i<s.size()-1;i++){
        if(s[i]!=s[i+1]){
            st.push(s[i]);
        }

    }

  if(s[0]==s[s.size()-1]){
      f++;
  }
   f=f+ int(( s.size()-st.size())/2);

   cout<<f;

}

void solve_ultimate(string s){
    int f=0;int a=0;

    char ex='0';
    char nex='1';

    for( int i=0;i<s.size();i++){
        if(s[i]!=ex){
            f++;
        }
        if(s[i]!=nex){
            a++;
        }
        ex=(ex=='0')?'1':'0';
        nex=(nex=='0')?'1':'0';

    }

    cout<<f<<a<<endl;

}


// 01010010101011111111111110000000000000



signed main(){
    fast;
    int t = 1;
    string s;
    cin >> s;
   

    while(t--){
    	solve(s);
    }
    return 0;
}
