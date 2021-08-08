#include<bits/stdc++.h>

using namespace std;


 // } Driver Code Ends


class Solution{

    // Function to find the trapped water between the blocks.
    public:
    int trappingWater(int a[], int n){
     int n1;
    n1=n;
    for(int i=n1-1;i>0;i--){
        
        if(a[i]<=a[i-1]){
            n1--;
        }
        else {
            break;
        }
    }
   
   n=min(n1+1,n);
   int b[n];
   for(int i=n-1;i>0;i--){
       b[i]=0;

   }
   int ma=a[n-1];
   for(int i=n-1;i>0;i--){
       ma=max(a[i],ma);
       b[i]=ma;

   }
   
   
    int s=0;int mp=a[0];
    for(int i=1;i<n;i++){
        mp= max(mp,a[i]);
        
        int k=min(b[i],mp);
        // cout<<i<<" "<<mp<<" "<<ma<<" "<<k-a[i]<<" "<<endl;
        if(k-a[i]>0){
             s=s+k-a[i];
        }
       
    }
   return s;
    }
};

// { Driver Code Starts.

int main(){
    
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        
        int a[n];
        
        //adding elements to the array
        for(int i =0;i<n;i++){
            cin >> a[i];            
        }
        Solution obj;
        //calling trappingWater() function
        cout << obj.trappingWater(a, n) << endl;
        
    }
    
    return 0;
}  // } Driver Code Ends
