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


// rotated sorted array binary search 
// it is almost same just that two increasing graphs with suddeen jerk of fall down in between
// so when so get the leftmost or right most part 
// i.e whenver we have key between the start to mid or from mid to last ( end) it's prety straightforward then
// however it is in the center part 
// so major thing is deciding which of the 4 parts is the key in
//        *
//      *
//    *
//      
//           *
//         * 
// graph is kind of like this 
 

void solve(int ar[20] , int key, int n)
{
    int s=0;int e=n-1;
    int mid=0;
    while(s<=e){
        mid=(s+e)/2;
        if(ar[mid]==key){
            cout<<"Element at "<<mid<<endl;
            return ;
            break;
        }
        // mid lies in first line leftmost part
        if(ar[s]<=ar[mid]){
            if(key >=ar[s] && key<=ar[mid]){
                e=mid-1;
            }
            else{
                s=mid+1;
            }
        }
        // mid lies in second line i.e right one
       
            else if(key>=ar[mid] && key<=ar[e]){
                s=mid+1;
            }
            else{
                e=mid-1;
            }
        

    }
    
cout<<"Element not found"<<endl;
    
	
}



signed main(){
    fast;
    int t = 1;
   int n;
   cin>>n;
   int a[20];
   for(int i=0;i<n;i++){
       cin>>a[i];
   }
   int key;
   cin>>key;
    while(t--){
    solve(a,key,n);
        
       
    }
    return 0;
}
