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


void solve_naive(vector<vector<int>>&mat,int r,int c){
    int j=0;int f=0;
    int ar[r*c];
	for(int i=0;i<r*c;i++){
        if(j%c==0 && i!=0){
            j=0;f=f+1;
        }
        if(j<c && f<r){
            ar[i]=mat[f][j++];
        }
        



    }
    sort(ar,ar+r*c);
    cout<<ar[(r*c)/2]<<endl;
for(int i=0;i<r*c;i++){
    cout<<ar[i]<<" ";
}

}

void solve(vector<vector<int>>&mat,int r,int c){
   
    
    int i=0;int ir=0;int ic=0;
   int jr=0;int jc=0;
   int mi=INT16_MAX;
   int j=0;int f=0;

   for(i=0;i<r*c;i=i+c){
       if(mat[i/c][0]<mi){
           mi=mat[i/c][0];

       }
   }
   
    swap(mat[0][0],mi);



    for(i=0;i<(r*c);i++){
       
        
            if( mat[ir][ic]==mat[jr][jc]){
                cout<<mat[ir][ic]<<" ";
                
                 
                 
                ir++;
                jc++;
                if(ir%r==0 && ir!=0){
                    ir=0;
                    ic++;
                }
                if(jc%c==0 && jc!=0){
                    jc=0;
                    jr++;
                }
                    

            }
            
            else if(mat[ir][ic]<mat[jr][jc]){
                cout<<mat[ir][ic]<<" ";
                
                ir++;
                if(ir%r==0 && ir!=0){
                   ir=0;
                    ic++;
                }
                
            }
            
            else {
                cout<<mat[jr][jc]<<" ";
               
                
                jc++;
                 if(jc%c==0 && jc!=0){
                      jc=0;
                    jr++;
                }
                
            }


        }
    }
	





int main(){
    fast;
    int t = 1;
    int r,c;int x;int k;
  cin>>r>>c;
  vector<vector<int>> mat(r);
  
  
  for(int i=0;i<r;i++){
      for(int j=0;j<c;j++){
          cin>>x;
          mat[i].push_back(x);
      }
  }

  

    while(t--){
    	solve_naive(mat,r,c);
    }
    return 0;
}
