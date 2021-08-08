/** problem : to have an array of size n <10^7 with initially 0 as all the values . Then for every query Q <10^6 we have a pair of L,U and all the values in array from L to U needs to be incrememted by 1 for each query.
solution : first we can use vectors then initialize it with zero then for every elelemnt in L to U we can update . Tjus will take O(QN) time complexity . so to avoid TLE 
sol -approach 2: using vectors but this time using concept of diffrence first we do the operations then update the array . for every value of L arr[l} is set to 1  by  and arr[u} is set to -1.
then cumulative sum at the end 
**/

#include<bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
void vectorprob()
{
     int n;
     cin>>n;
     vector<int>A(n,0);
     vector<int>::iterator it;
     int t,L,U;
    cin>>t;
     while(t)
     {
         cin>>L>>U;
         for (it=(A.begin()+L);it<=(A.begin()+U);it++)
     {
        
        *it= *it+1;
    
    }
        t=t-1;
     }
     

    for (int x:A)
    {
        cout<<x<<" ";
    }
}

void vectorprob1()
{
   int n;
   cin>>n;
   vector<int>arr(n,0) ;
   int q;
   cin>>q;
   while(q--)
   {
       int l,r;
       cin>>l>>r;
       arr[l]++;
       if (r+1<n)
       {
           arr[r+1]--;
       }
   }
   for (int i = 1 ; i<n;i++)
   {
       arr[i]+=arr[i-1];

   }
   for (int i = 0 ; i<n;i++)
   {
       cout<<arr[i]<<" ";

   }


}

int main()
{
    fast;
    
    vectorprob1();
    
    #ifndef ONLINE_JUDGE
        cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif
    

}
