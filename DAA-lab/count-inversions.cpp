#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long ll;typedef long double ld;typedef pair<int,int> pii;
#define F first
#define S second
#define PB push_back
#define MP make_pair


void solve(int n,int a[]){
    vector<int>ar;
    int i;
    for(i=0;i<n;i++){
        ar.push_back(a[i]);
    }

    sort(ar.begin(),ar.end());
    int s;s=0;int m;
    for(i=0;i<n;i++){
        auto k=find(ar.begin(),ar.end(),a[i]);
        s=s+distance(ar.begin(),k);
        ar.erase(k);
      
        
       
    }
    cout<<s<<endl;
	
}








int main(){
    fast;
    int n;
    int t = 1;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    while(t--){
    	solve(n,a);
    }
    for(int i=0;i<n;i++){
        cout<<a[i];
    }
    return 0;
}
