#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long ll;typedef long double ld;typedef pair<int,int> pii;
#define F first
#define S second
#define PB push_back
#define MP make_pair

void solve_ascending(int a[],int n){
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<n-1;j++){
            if(a[j+1]<a[j]){
                swap(a[j],a[j+1]);
            }
        }
    }

  
	
}

void solve_ascending(int a[],int n){
    int i3,j3;
    for(i3=k;i3<n;i2++){
        for(j3=k;j3<n-1;j3++){
            if(a[j3+1]>a[j3]){
                swap(a[j3],a[j3+1]);
            }
        }
    }

  for(i=0;i<n;i++){
        cout<<a[i]<<" ";
    }  
	
}




void solve(){
    int n;int i;int j;
	cin>>n;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    if((n)%2==0){
        i=1;
        j=floor(n/2);
        int k=j;
        for (i=1;i<=floor(n/2);i=i+2){
        swap(a[i],a[j]);
        j=j+2;
        if(j>=n){break;}
         }
         int i2,j2;
    for(i2=0;i2<k+1;i2++){
        for(j2=0;j2<k;j2++){
            if(a[j2+1]<a[j2]){
                swap(a[j2],a[j2+1]);
            }
        }
    }
        int i3,j3;
    for(i3=k;i3<n;i2++){
        for(j3=k;j3<n-1;j3++){
            if(a[j3+1]>a[j3]){
                swap(a[j3],a[j3+1]);
            }
        }
    }

        
    }
    else{
        i=1;
        j=floor(n/2)+1;
        int k=j;
        for (i=1;i<=floor(n/2);i=i+2){
        swap(a[i],a[j]);
        j=j+2;
        if(j>=n){break;}
         }
             int i2,j2;
    for(i2=0;i2<k+1;i2++){
        for(j2=0;j2<k;j2++){
            if(a[j2+1]<a[j2]){
                swap(a[j2],a[j2+1]);
            }
        }
    }
        int i3,j3;
    for(i3=k;i3<n;i2++){
        for(j3=k;j3<n-1;j3++){
            if(a[j3+1]>a[j3]){
                swap(a[j3],a[j3+1]);
            }
        }
    }
    }
    
    

         for(i=0;i<n;i++){
             cout<<a[i]<<" ";
         }
}




int main(){
    fast;
    int t = 1;
    
    while(t--){
    	solve();
    }

    #ifndef ONLINE_JUDGE
        cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif
   
    return 0;
}
