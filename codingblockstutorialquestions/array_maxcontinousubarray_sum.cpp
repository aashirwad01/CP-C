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




void subarrayn3(){
    int n ;
    cin>>n;
    // inputting array
    int ar[n];
    for(long long int i=0;i<n;i++){
        cin>>ar[i];

    }

    

    // finding subarrays and then finding sum of each subarray and then finding max out of them

    int fmax=0;
    int cmax=0;
    long long int left ;
    long long int right;

    for ( long long int i=0;i<n;i++){
        for(long long int j=i;j<n;j++){
            cmax=0;
            for(long long int k=i;k<=j;k++){
                cmax+=ar[k];
            }
            if(fmax<cmax){
                fmax=cmax;
                left =i;
                right=j;
            }
            
        }
    }

    for ( long long int k=left ;k<=right;k++){
        cout<<ar[k]<<" ";
    }
    cout<<endl;
    cout<<fmax<<endl;


	
}

void subarrayn2(){
    int n ;
    cin>>n;
    // inputting array and finding cumulative sum alongside
    int ar[n];
   
    
    int fmax=0;
    int cmax=0;
   
  
    for(long long int i=0;i<n;i++){
        cin>>ar[i];
        
    }

   
    

   
    
    for ( long long int i=0;i<n;i++){
        cmax=0;
        for( long long int j=i;j<n;j++){
           
            cmax=cmax+ar[j];
            fmax=max(cmax,fmax);
            
        }
        
    }

 
   
    cout<<fmax<<endl;


}

void kadane(){
    int n ;
    cin>>n;
    int cmax=0;
    int fmax=0;
    
    int ar[n];
    for(long long int i=0;i<n;i++){
        cin>>ar[i];
    }

   

    for(long long int i=0;i<n;i++){
        cmax=cmax+ar[i];
        if(cmax<0){
            cmax=0;
        }
        fmax=max(cmax,fmax);

    }

    cout<<fmax<<endl;
}


signed main(){
    fast;
    int t = 1;
    
    
    while(t--){
    	// subarrayn3();
        // subarrayn2();
        kadane();
    }
    return 0;
}
