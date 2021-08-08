#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long ll;typedef long double ld;typedef pair<int,int> pii;
#define F first
#define S second
#define PB push_back
#define MP make_pair



void swap1 (long long int *a , long long int *b){
    long long int temp=*a;
    *a=*b;
    *b=temp;
}
long long int partition1(long long int l , long long int h, long long int a[])
{
    long long int i=l; long long int j=h;
 
    long long int pivot = a[l];
   
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
