#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long ll;typedef long double ld;typedef pair<int,int> pii;
#define F first
#define S second
#define PB push_back
#define MP make_pair



void solve(int a[],int n){
    int i;int j=n-1;
    for(i=0;i<j;){

        if(a[i]==a[i+1]){
            if(a[i]!=a[j]){
            swap(a[i+1],a[j]);
            j=n-1;i++;

        }
        else{
            j--;
        }

        }
        else{
            i++;
        }
         }
    for(i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
	
}

void solve_another(int a[],int n){
    int i;int j;
    for(i=0;i<n;i++){
        for(j=n;j>i;j--){
            if(a[i]!=a[j])
            {break;}
            
            
        }
        swap(a[i+1],a[j]);
    }
    for(i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}

void solve_better(int a[],int n){
    int i;int j;

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
        cout<<"Method 1 O(N^2)"<<endl;
        solve_another(a,n);
        cout<<endl;
        cout<<"Method 2 O(N)"<<endl;
        solve(b,n);
    	
    }
    #ifndef ONLINE_JUDGE
        cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

   
    return 0;
}
