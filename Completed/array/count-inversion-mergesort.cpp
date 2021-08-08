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

long long int smerge(long long int l,long long int mid,long long int h,long long int a[],long long int n);
long long int smergesor (long long int l,long long int h,long long int a[],long long int n);




long long int smerge(long long int l,long long int mid,long long int h,long long int a[],long long int n){
long long int inv=0;
long long int i=l;
long long int k=l;
long long int j=mid+1;
long long int b[n];

while(i<=mid && j<=h){
    if(a[i]<=a[j]){
       
        b[k++]=a[i++];
        
    }
    else{
      
        b[k++]=a[j++];
        inv=inv+ (mid-i+1);
    }
}


    while(j<=h){
       
        b[k++]=a[j++];
    }


    while(i<=mid){
      
        b[k++]=a[i++];
    }

for (k=l;k<=h;k++){
    a[k]=b[k];
}
return inv;
}



long long int smergesor(long long int l,long long int h,long long int a[],long long int n){
    long long int mid,inv=0;
    if(l<h){
        mid=(l+h)/2;
        inv=inv+smergesor(l,mid,a,n);
        inv=inv+smergesor(mid+1,h,a,n);
        inv=inv+smerge(l,mid,h,a,n);
    }
    return inv;
}





int main(){
    fast;
    long long int n;
    long long int t = 1;
    cin >> n;
    long long int a[n];
    for(long long int i=0;i<n;i++){
        cin>>a[i];
    }
    while(t--){
    	cout<<smergesor(0,n-1,a,n)<<endl;
    }
    for(long long int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}