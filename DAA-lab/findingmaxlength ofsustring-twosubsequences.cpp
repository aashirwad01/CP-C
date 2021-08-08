#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long ll;typedef long double ld;typedef pair<int,int> pii;
#define F first
#define S second
#define PB push_back
#define MP make_pair

void solve(int n){
    int a[n+2];
    a[0]=0;
    a[1]=1;
    int i;
    
    for(i=2;i<n;i++){
        a[i]=a[i-1]+a[i-2];
        
    }

    for(i=0;i<n;i++){
        cout<<a[i]<<" ";
        
    }


	
}




int main(){
    fast;
    int n;
    int t = 1;
    cin >> n;
    while(t--){
    	solve(n);
    }

    #ifndef ONLINE_JUDGE
        cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}
