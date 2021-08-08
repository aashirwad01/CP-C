#include <bits/stdc++.h>
#include<climits> 
#include<cstdlib> 
using namespace std;
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long ll;typedef long double ld;typedef pair<int,int> pii;
#define F first
#define S second
#define PB push_back
#define MP make_pair
const ll mod = 1e9+7, N = 2e6+7, M = 2e6+7, INF = INT_MAX/10;
ll powe(ll x, ll y){ x = x%mod, y=y%(mod-1);ll ans = 1;while(y>0){if (y&1){ans = (1ll * x * ans)%mod;}y>>=1;x = (1ll * x * x)%mod;}return ans;}




void solve(long long int a[], long long int n){

sort(a,a+n);
long long int k;
cin>>k;
cout<<a[k-1];


}

void swap1 (long long int *a , long long int *b){
    long long int temp=*a;
    *a=*b;
    *b=temp;
}
long long int partition1(long long int l , long long int h, long long int a[])
{
    long long int i=l; long long int j=h;
    // long long int pp= rand()% (h-l +1 );
    long long int pivot = a[l];
    // swap1(&a[pp],&a[l]);
long long int k;k=l+1;
for (;i<=h;i++)
{
    if(a[i]<pivot)
    {
        if(i!=k)
        {
            swap1(&a[k],&a[i]);
        }k++;

    }
}
swap1(&a[l],&a[k-1]);
a[k-1]=pivot;

return k-1;

}


//     while (i<j){
//         do {
//         i++;
//     }
//     while(a[i]<=pivot );

//     do {
//         j--;
//     }
//     while(a[i]>pivot && j>0);

//     if (i<j){
//         swap1(&a[i],&a[j]);
//     }
//     }
//     swap1(&a[j],&a[l]);
//     return j;

// }

void quicksort(long long int l, long long int h , long long int a[])
{
if (l<h){
    long long int j= partition1(l,h,a);
    quicksort(l,j-1,a);
    quicksort(j+1,h,a);

}


}



int main(){
    fast;
    long long int  n;
    cin>>n;
    long long int  a[n];
    long long int i;
    for ( i=0;i<n;i++)
    {
    cin>>a[i];
    }
    // int t = 1;
    // cin >> t;
    // while(t--){
    // 	solve(a,n);
    // }
    quicksort(0,n-1,a);
    
    for (i = 0; i< n;i++){
    cout<<a[i]<<" ";
}
cout<<endl;
   #ifndef ONLINE_JUDGE
        cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
        #endif
    return 0;
}
