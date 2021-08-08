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




int minJumps(int arr[], int n){
        long long int i,j,f,k;j=0;
        i=0;f=0;k=0;
        cout<<arr[93]<<arr[94]<<arr[95]<<"jj"<<endl;
        while(i+ *max_element(arr+i,arr+k)<n)
        {
             if(arr[i]==0){f=1;break;}

            cout<<*max_element(arr+i,arr+i+arr[i])<<"gg"<<endl;
            
            i=i+ *max_element(arr+i,arr+i+arr[i]);

            cout<<i<<endl;   
               
             j++;

             if(i+arr[i]>n){
                 k=n-1;
             }
             else{
                 k=i+arr[i];
             }
             cout<<k<<endl;
                
            }
            cout<<i<<endl;


        // if(i<n){j++;}
        
        if (f==0){
            return j;  
        }
        else
        return -1;
      
    }




int main(){
    fast;
    int t = 1;int n;
    cin >> n;
    int a[n];
    for (int i=0;i<n;i++){
        cin>>a[i];
    }

    
    while(t--){
    	cout<<minJumps(a,n);
    }
   
    return 0;
}
