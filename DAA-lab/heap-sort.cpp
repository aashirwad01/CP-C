#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long ll;typedef long double ld;typedef pair<int,int> pii;
#define F first
#define S second
#define PB push_back
#define MP make_pair




void heapifye(int a[],int n,int i)
{
	int lar=i;
    int l=2*i+1;
    int r=2*i+2;
    if(l<n && a[lar]<a[l]){
        lar=l;
    }
    if(r<n && a[lar]<a[r]){
        lar=r;
    }
    if(lar!=i){
        swap(a[i],a[lar]);
        heapifye(a,n,lar);
    }
}

void heap_sort(int a[],int n){
    int i;
    for(i= (n/2-1);i>=0;i--){
       heapifye(a,n,i); 
    }

    for(i=n-1;i>0;i--){
        swap(a[0],a[i]);
        heapifye(a,i,0);
    }

    for(i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}




int main(){
    fast;
    int n;int i;
    int t = 1;
    cin >> n;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    
    while(t--){

       
    	heap_sort(a,n);
        cout<<endl;
   
    }

    #ifndef ONLINE_JUDGE
        cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}
