#include<bits/stdc++.h>
using namespace std;

// classic method or the common approach
// largest no which is common factor of both nos

void gcd(int a,int b)
{
    int hcf=INT16_MIN;
for(int i=0;i<=min(a,b);i++){
    if(a%i==0 && b%i==0){
        hcf=max(hcf,i);
    }
}

}

// this is based on concept of finding gcd using dividing divisor using remainder

int gcd_euclid(int a,int b){
    if(b==0){
        return a;

    }

   return gcd_euclid(b,a%b);
}

int main()
{

   cout<<"Hello"<<endl;
   cout<< gcd_euclid(100,140);
return 0;

}