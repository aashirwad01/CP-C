#include<bits/stdc++.h>
using namespace std;


// finding prime using clasic method first
// to find prime nos upto n
// we take a loop from 2 to n-1 and if any factor is found then it is not prime

void  prime_classic (int n)
{
    int flag=0;
for(int i=3;i<n;i++){
    for(int j=2;j<i;j++){
        if(i%j==0){
            flag=1;
            break;
        }
    }
    if(flag==0){
        cout<<i<<" ";
       
    }
    flag=0;


}

}


// O(N/2*sqrt(N)/2)

void prime_optimised(int n){
    int flag=0;
    for(int i=3;i<n;i=i+2){
        for(int j=2;j*j<i;j++){
            if(i%j==0){
                flag=1;
                break;
            }
        }
        if(flag==0){
            cout<<i<<" ";
        }
        flag=0;
    }
}

//O(NlogN)
// in sieve what we do is make an arrya and cross out the multiples of each no 
// say starting with 2 , if 4,6,8... all the multiples are crossed out
// with 3 , 3,6,9 are crossed out

void prime_best_sieveof(int n)
{
    int p[n]={1};
    p[0]=0;
    p[1]=0;

    for(int i=2;i<=n;i++){
        if(p[i]==1){
            for(int j=2*i;j<=n;j=j+2*i){
                p[j]=0;

        }
        }
        
    }


}

//O(N log logN)
// now in the optimised method we consider only odd nos to begin with we assume all odd are prime and then we cross out the multiples of different odd nos
// we start with j = i*i as say for example i = 5 and then j will start at 25 i.e 5*5
// as all the nos less than 25 are made by 5*1 or 5*2 or 5*3 or 5*4 which are all the i's already covered before 5 so no need to start again from 2*i
void prime_sieveoptimsed(int n)
{
    int p[n]={0};
    p[0]=p[1]=0;
    p[2]=1;
    for(int i=3;i<=n;i+=2){
       p[i]=1;
    }

    for(int i=3;i<=n;i+=2){
        if(p[i]){
            for(int j=i*i;j<=n;j++){
                p[j]=0;
            }
        }
    }

}