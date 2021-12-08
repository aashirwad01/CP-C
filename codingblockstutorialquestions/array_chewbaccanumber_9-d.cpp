#include <bits/stdc++.h>
using namespace std;



void solve(long long int n){
    long long int num=n;
    long long int s=0;
    int f=0;
    while(num){
        int d= num%10;
        
        if(d>=5 && (num/10!=0)){
            d=9-d;
        }
        else if(d>=5 && (num/10==0)){
            if(d!=9){
                d=9-d;

            }
        }
        s=s+d*pow(10,f);
        num=num/10;
        f++;

    }

    cout<<s<<" "<<f;


   
} 




int main(){
  
   long long int t=0;
    
    cin >> t;
    
    solve(t);
    
    return 0;
}
