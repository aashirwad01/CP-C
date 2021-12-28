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


//  in a rotated sorted array to find pivot element i.e highest element 
// basically 3 conditions are there
// 1. 7 8 9 1 2 3 : Here 9 is mid and pivot so if mid > mid +1 i.e 9 > 1 and mid >mid-1 i.e 9 > 8 so it is pivot
// 2. 7 8 1 2 3 4 : Here 8 is pivot and 1 is mid so if mid -1 is > mid so mid -1 i.e 8 is pivot
// 3. 7 8 9 10 11 1 : Here 11 is pivot and mid is 9 so we have to see where to move in the array i.e which part will contain pivot
// 4. 7 1 2 3 4 5 : Same as last case but pivot is on the left side so we have find again where is pivot
// pivot is always in part where unsorted array is so using start and end conditio by comparing with mid we can find the part which is sorted and
// move the algo to the unsorted part 
//        *
//      *
//    *
//      
//           *
//         * 
// graph is kind of like this 


void solve(int ar[20] , int n)
{
    int s=0;int e=n-1;
    int mid=0;
    while(s<=e){
        mid=(s+e)/2;
       if(mid <e && ar[mid-1]<ar[mid] && ar[mid+1]<ar[mid]){
           cout<<"Pivot Element is at "<<mid<<endl;
           return;
       }
       else if( mid >s && ar[mid-1]>ar[mid]){
           cout<<"Pivot Element is at "<<mid-1<<endl;
            return;
       }
       // pivot element is always in unsorted array part
       else if(ar[mid-1]<ar[mid]&& ar[mid+1]>ar[mid])
       {
           if(ar[mid]>ar[s]){
               s=mid+1;
           }
           else {
               e=mid-1;
           }

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
  
    while(t--){
    solve(a,n);
        
       
    }
    return 0;
}
