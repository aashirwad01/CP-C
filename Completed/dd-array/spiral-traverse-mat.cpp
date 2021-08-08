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




void solve_another(vector<vector<int>>mat,int r,int c){


  if(r==1 and c ==1){
        return ;
    }
int f=0;
int i=0;int j=0;
int r1=r;
int c1=c;
int size= r*c;


for(int k=0;k<=size;k++){
    
   
    if(i==0 && j<c){
        cout<<mat[i][j++]<<" ";
   
        
    }
    else if(j==c && i<r){
        i++;
        if(i<r){
            cout<<mat[i][j-1]<<" ";
           
        }
       
    }
else if( i==r ){
    --j;
    if(j>=0 && (i-1) !=j){
cout<<mat[i-1][j]<<" ";
    }
    
}

f++;


    
    

   

    
}

for(i=r-2;i>f;i--){
    cout<<mat[i][f-1]<<" ";
}
r--;c--;
// cout<<r<<c<<endl;
solve_another(mat,r,c);

}

void print(vector<vector<int>>mat,int r,int c,int i,int j,vector<int>&v){

if(i>=r || j>=c){
    return ;
}

for(int p=j;p<c;p++){
    v.push_back(mat[i][p]);
   
}
for(int p=i+1;p<r;p++){
    v.push_back(mat[p][c-1]);
}
   
if(i!=(r-1)){
    for(int p=c-2;p>=j;p--){
        v.push_back(mat[r-1][p]);
       
    }
}

if(j!=(c-1)){
for(int p= r-2;p>i;p--){
    v.push_back(mat[p][j]);
   
}
}

print(mat,r-1,c-1,i+1,j+1,v);

}

 vector<int> spirallyTraverse(vector<vector<int>>mat,int r,int c)
{
    vector<int>v;
    print(mat,r,c,0,0,v);

return v ;
    
}


int main(){
    fast;
    int t = 1;
    int r,c;int x;
  cin>>r>>c;
  vector<vector<int>> mat(r);
  
  for(int i=0;i<r;i++){
      for(int j=0;j<c;j++){
          cin>>x;
          mat[i].push_back(x);
      }
  }

  
vector<int>v;
    while(t--){
    	v = spirallyTraverse(mat,r,c);
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    return 0;
}
