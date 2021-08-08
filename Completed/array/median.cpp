#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long ll;typedef long double ld;typedef pair<int,int> pii;
#define F first
#define S second
#define PB push_back
#define MP make_pair

void solve(int a[],int b[],int n,int m){
    int j=0;
    int k=0;
    float med=0.0;
    

   
    for(int i=0;k<=(m+n)/2;){
       
        if((a[i]<=b[j] && i<n)|| j==m){
           
          
            
            if((m+n)%2==1){
                if(k==((m+n)/2)){
                med=a[k-j];
               
                
            }
        }
        else if((m+n)%2==0){
            if(k==(m+n)/2 || k== (m+n-2)/2){
               

                med+=(double)a[k-j]/2;
              
              
                
            }

        }
         i++;k++;
         
        }
       
        if((a[i]>b[j] && j<m )|| i==n){
          
        
           
            
            if((m+n)%2==1){
                if(k==((m+n)/2)){
                med=b[k-i];
              
            }
        }
        else if((m+n)%2==0){
           
            if(k==(m+n)/2 || k== (m+n-2)/2){
              
               med+=(double)b[k-i]/2;
               
            }

        }
         j++;k++;
        }

        if(j==m){
            j--;
        }

       

    }

    cout<<med<<endl;

	
}




int main(){
    fast;
    int n;int m;
    int t = 1;
    cin >> n>>m;
    int a[n];int b[m];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<m;i++){
        cin>>b[i];
    }
    while(t--){
    	solve(a,b,n,m);
    }

    #ifndef ONLINE_JUDGE
        cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}
