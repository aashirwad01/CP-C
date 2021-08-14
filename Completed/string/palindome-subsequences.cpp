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

    vector<string>st;
    int j=1;
    int n=s.size();
    int i=0;
    
   


for(i=0;i<n;i++){
    for( int j=i;j<n;j++){
        
        if( i==j){
            cout<<i<<" "<<j<<endl;
            st.push_back(s.substr(i,1));
            
        }
        else{
            cout<<i<<" "<<j<<endl;
            st.push_back(s.substr(i,j));
        }
       
      
    }
   
}
st.push_back(s);
int k=0;
for(auto it:st){
    cout<<it<<endl;
}

for(auto it:st){
    int j=it.size()-1;
    int i=0;
    int f=0;
    while(i<j){

        if(it[i]!=it[j]){
            f=1;
            break;
        }
        i++;j--;
    }
    if( f==0){
        cout<<it<<" ";
       k++; 
    }
}
k--;
cout<<k;
    

    
	
}

int mat[1000][1000];

int count(int i,int j){
    if(i>j){
        return 0;
    }
    if(mat[i][j]!=-1){
        return mat[i][j];
    }
    if(i==j){
        return mat[i][j]=1;
    }
    else if(mat[i]==mat[j]){
        return mat[i][j]=count(i+1,j)+count(i,j-1)+1;

    }
    else{
        return mat[i][j]=count(i+1,j)+count(i,j-1)-count(i+1,j-1);
    }


}

void solve_another(string s){
    memset(mat, -1, sizeof(mat));
    cout<<count(0,s.size()-1);
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
