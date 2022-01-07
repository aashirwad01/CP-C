#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long ll;typedef long double ld;typedef pair<int,int> pii;
#define F first
#define S second
#define PB push_back
#define MP make_pair
const ll mod = 1e9+7, N = 2e6+7, M = 2e6+7, INF = INT_MAX/10;
ll powe(ll x, ll y){ x = x%mod, y=y%(mod-1);ll ans = 1;while(y>0){if (y&1){ans = (1ll * x * ans)%mod;}y>>=1;x = (1ll * x * x)%mod;}return ans;}


// subsequences of a string using bit wise 
// basically we take no from 0 to 2^len -1 where len is length of the string
// these no are represented in binary and then corresponding to these binary sequences charcaters are printed 
// if digit is 1 then character is printed
// then left shift and remove that character


// void filterchars(char* a , int no){
//     int i=0;
//     while(no>0){
//         (no&1)?cout<<a[i]:cout<<"";
//         i++;
//         no = no>>1;
//     }
// }
void solve(char a[20])
{
    int n = strlen(a);
     
    int range = (1<<n)-1;
   
    for(int i=0;i<=range;i++)
    {
      
       int j=0;
       int no=i;
        while(no>0){
        (no&1)?cout<<a[j]:cout<<"";
        j++;
        no = no>>1;
    }
        cout<<endl;
    }

    
   
}




int  main(){

    char a[20]="abc";
     
    solve(a);

   

    
   
    return 0;
}
