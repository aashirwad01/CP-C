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
    int io=0,v=0,x=0,l=0,c=0,d=0,m=0;
    int sum=0;


    for(int i=s.size()-1;i>=0;i--){
        if(s[i]=='I'){
            io++;
           
            
        }
        if(s[i]!='I'){
            break;
        }
    }

    int ix=0;
    for(int i=s.size()-1;i>=0;i--){
        if(s[i]=='X'){
            if(s[i-1]=='I'){
                ix++;
                i--;
                
            }
            else if(s[i]=='X' && s[i+1]!='C'&& s[i+1]!='L'){
                x++;
            }
    }
    }

    int iv=0;
    for(int i=s.size()-1;i>=0;i--){
        if(s[i]=='V'){
            if(s[i-1]=='I'){
                iv++;
                i--;
           
            }
            else{
                v++;
            }
    }
    }

    int im=0;
    for(int i=s.size()-1;i>=0;i--){
        if(s[i]=='M'){
            if(s[i-1]=='C'){
                im++;
                i--;
           
            }
            else{
                m++;
            }
    }
    }


    int id=0;
    for(int i=s.size()-1;i>=0;i--){
        if(s[i]=='D'){
            if(s[i-1]=='C'){
                id++;
                i--;
           
            }
            else{
                d++;
            }
    }
    }

    int il=0;
    for(int i=s.size()-1;i>=0;i--){
        if(s[i]=='L'){
            if(s[i-1]=='X'){
                il++;
                i--;
           
            }
            else{
                l++;
            }
    }
    }
int ic=0;
    for(int i=s.size()-1;i>=0;i--){
        if(s[i]=='C'){
            if(s[i-1]=='X'){
                ic++;
                i--;
           
            }
            else if(s[i]=='C' && s[i+1]!='M' &&s[i+1]!='D'){
                c++;
            }
    }
    }

    

    


    sum=sum+(v*5)+(x*10)+(l*50)+(il*40)+(c*100)+(d*500)+(id*400)+(m*1000)+(im*900)+(ix*9)+(iv*4)+io+(ic*90);
    
    cout<<sum<<" "<<m<<" "<<im<<" "<<c<<" "<<ic<<" "<<d<<" "<<iv<<" "<<ix<<" "<<x<<" "<<l<<" "<<il<<endl;;
	cout<<v<<" "<<io<<" "<<id;
}




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
