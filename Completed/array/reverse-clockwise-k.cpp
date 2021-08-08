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




void rotate(int arr[], int n)
{
    int l;int temp;
    l=n-1;
    while(l)
    {
        temp=arr[l];
        arr[l]=arr[l-1];
        arr[l-1]=temp;
        l--;
    }
}

void rotate_n(int arr[],int n)
{
    
    int k;k=2;
    cout<<"Enter k to reverse"<<endl;
    cin>>k;
    reverse(arr,arr+k);
    reverse(arr+k+1,arr+n);
    reverse(arr,arr+n);

    for (int i = 0; i< n;i++){
    cout<<arr[i]<<" ";
    }
}



int main(){
    fast;
    int t=1;
    int  n;
    cin>>n;
    int  a[n];
    int i;
    for ( i=0;i<n;i++)
    {
    cin>>a[i];
    }
    while(t--){
    	rotate(a,n);
    }

    for (i = 0; i< n;i++){
    cout<<a[i]<<" ";
}
cout<<endl;
   #ifndef ONLINE_JUDGE
        cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
        #endif
    return 0;
}
