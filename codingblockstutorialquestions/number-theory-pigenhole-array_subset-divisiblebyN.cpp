#include<bits/stdc++.h>
using namespace std;

// question is find all the subsets of an array with continous elements whose sum is divisible by array size n
// i.e say array is 1,4,2,7,3
// good arrays are 1,4 and 7,3 as 1+4=5 is divisible by 5 same as 7+3 = 10

// approach 1 which is slightly optimised brute force takes O(N^2) time complexity
// first do prefix sum then a[j]-a[i]

void brute_arraysubsetdivisiblebyN(int n,int* ar){

    int s=0;
    int f=0;
    int sumarray=0;
    int ar_sum[n]={0};
    ar_sum[0]=ar[0];
    for(int i=1;i<n;i++){
       ar_sum[i]=ar_sum[i-1]+ar[i];

    }

    for(int i=0;i<n;i++){
       
        for(int j=i;j<n;j++)
        {
               if((i!=j)&&((ar[j]-ar[i])%n==0)){
                   f++;
               }


        }
        
    }

    cout<<"No of good arrays"<<f<<endl;
}

// from previous appraoch we know that (ar[j]-ar[i])%n==0 so say (b-a)&a==0 so 
// b%n = a%n hence find modulo and then get the frequency array then 
// freq C 2 will be ans 

void numbertheorypigenhole_arraysubsetdivisiblebyN(int n,int* ar)
{
    int ar_mod[n+1]={0};
    ar_mod[1]=ar[0];
    for(int i=1;i<n;i++){
        ar_mod[i+1]=ar[i]+ar_mod[i];
    }

    for(int i=1;i<=n;i++){
        (ar_mod[i]) =   (ar_mod[i]+n)%n;
    }
    int ar_feq[n+1]={0};
    for(int i=0;i<=n;i++){
        ar_feq[ar_mod[i]]++;
    }
    int ans=0;
    for(int i=0;i<=n;i++){
        ans+=(ar_feq[i])*(ar_feq[i]-1)/2;
    }

}