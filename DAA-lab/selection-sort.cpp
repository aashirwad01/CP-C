#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long ll;typedef long double ld;typedef pair<int,int> pii;
#define F first
#define S second
#define PB push_back
#define MP make_pair




void solve_iteratively(int a[],int n){
    int i,j;int min;
    for(i=0;i<n;i++){
        min=i;
        for(j=i+1;j<n;j++){
            if(a[j]<a[min]){
                min=j;
            }
            
        }
        swap(a[min],a[i]);
    }

  for(i=0;i<n;i++){
        cout<<a[i]<<" ";
    }  
	
}

void solve_recursively(int a[],int i,int n){
    int j;int min;
    if(i>=n){return;}
    min=i;
        for(j=i+1;j<n;j++){
            if(a[j]<a[min]){
                min=j;
            }
           
        }
         swap(a[min],a[i]);
    
    solve_recursively(a,i+1,n);
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
    int b[n];
    for(i=0;i<n;i++){
        b[i]=a[i];
    }
    while(t--){

        cout<<"Iterative method"<<endl;
    	solve_iteratively(a,n);
        cout<<endl;
        cout<<"Recursive method"<<endl;
        
        solve_recursively(b,0,n);

        for(i=0;i<n;i++){
        cout<<b[i]<<" ";
    }  
    }

    #ifndef ONLINE_JUDGE
        cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}
