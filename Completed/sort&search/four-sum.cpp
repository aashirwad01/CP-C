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




void solve(int a[],int n){
    sort(a,a+n);
   
    vector<vector<int>>re;
    int val=0;
    cin>>val;
    int s=0;
    int l,r;
    for(int i=0;i<n-3;i++){
        for(int j=i+1;j<n-2;j++){
            l=j+1;
            r=n-1;
            vector<int>v;
            while(l<r){
                if(a[i]+a[j]+a[r]+a[l]==val){
                    v.push_back(a[i]);
                    v.push_back(a[j]);
                    v.push_back(a[l]);
                    v.push_back(a[r]);
                    // cout<<a[i]<<" "<<a[j]<<" "<<a[l]<<" "<<a[r]<<" ";
                    l++;r--;
                }
                else if(a[i]+a[j]+a[r]+a[l]<val){
                    l++;
                }
                else if(a[i]+a[j]+a[r]+a[l]>val){
                    r--;
                }
            }
           
            vector<int>vee;
            if(! v.empty()){
                for(int f=0;f<v.size();f++){
                    if(f==4){

                         re.push_back(vee);
                          vector<int>vee;
                        }
                        vee.push_back(v[f]);


                    }
               }
            
            

            
            
            }
        }
        
    

    
    
for(auto it:re){
        for(auto jt:it){
            cout<<jt<<" ";
        }
        cout<<endl;

	
}
}

// 1 2 84 92 $1 3 76 99 $1 3 78 97 $1 12 67 99 $1 12 78 88 $1 17 67 94 $1 26 60 92 $1 26 68 84 $1 32 51 95 $1 32 52 94 $1 32 54 92 $1 32 60 86 $1 32 68 78 $1 32 70 76 $1 34 52 92 $1 34 60 84 $1 34 68 76 $1 39 51 88 $1 51 60 67 $2 3 86 88 $2 12 68 97 $2 12 70 95 $2 17 68 92 $2 17 76 84 $2 26 52 99 $2 26 54 97 $2 26 67 84 $2 32 51 94 $2 32 67 78 $2 34 51 92 $2 34 67 76 $2 39 39 99 $2 39 52 86 $2 39 54 84 $2 39 60 78 $2 39 68 70 $3 12 67 97 $3 12 70 94 $3 12 76 88 $3 12 78 86 $3 17 60 99 $3 17 67 92 $3 26 51 99 $3 32 52 92 $3 32 60 84 $3 32 68 76 $3 34 54 88 $3 39 51 86 $3 39 67 70 $3 52 54 70 $12 17 51 99 $12 32 51 84 $12 32 67 68 $12 34 39 94 $12 39 52 76 $12 39 60 68 $17 26 39 97 $17 26 52 84 $17 26 60 76 $17 32 52 78 $17 32 54 76 $17 32 60 70 $17 34 52 76 $17 34 60 68 $17 39 39 84 $26 32 51 70 $26 32 54 67 $26 34 51 68 $26 34 52 67 $26 39 54 60 $34 39 39 67 $34 39 52 54 $


signed main(){
    fast;
    int t = 1;
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    while(t--){
    	solve(a,n);
    }
    return 0;
}
