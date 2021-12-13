#include <bits/stdc++.h>
using namespace std;



void solve(int n){
    int rh[n];
    int lh=0;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
    int rhe=0;
    for(int i=n-1;i>=0;i--){
        rhe=max(rhe,a[i]);
        rh[i]=rhe;

    }

//    for(int i=0;i<n;i++){
//         cout<<a[i];
//     }
//     cout<<endl;
//     for(int i=0;i<n;i++){
//        cout<<rh[i];
//     }
    // cout<<endl;
    int s=0;
    for(int i=0;i<n;i++){
        lh=max(lh,a[i]);
        s=s+(min(lh,rh[i])-a[i]);
    }

    cout<<s<<endl;


   
}




int main(){
  
   long long int t=0;
    
    cin >> t;
    
    solve(t);
    
    return 0;
}
