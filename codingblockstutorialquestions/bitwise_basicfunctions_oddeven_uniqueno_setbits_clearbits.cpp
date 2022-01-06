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


//bit masking common functions
// & ans , | or , ~ not , << left shift , >>right shift , ^ Xor
// bitwise takes O(n) time while * takes O(n2) and % takes O(n3)
// 2's complement . flip all the bits and add 1 . Represents negaive of a number

//1. find unique no from the list of no's 

void unique_no(int ar[20], int n)
{
    int p = 0;
    for(int i=0;i<n;i++)
    {
        p=p^ar[i];
    }
    cout<<p<<endl;
    
   
}

// odd or even no
// last bit of a no if read from left to right can show if a no is odd or even

void odd_even(){
    int n;
    cin>>n;

    if(n&1){
        cout<<"Odd No"<<endl;
    }
    else{
        cout<<"Even No"<<endl;
    }
}

// a and b are given to find out 
// min no of bits required to change a to b
// this will be equal to no of set bits in a ^ b.

void no_ofsetbits(int a)
{
    
    // this works in O(no of set bits)
    int count =0;
    while(a)
    {
        count ++;
        a= a& (a-1);

    }
   cout<<count<<endl; 
}

// now a method which works in O(no of bits) time complexity

void no_ofsetbits2ndmethod(int a)
{
    int count=0;
    while(a){
        if(a&1){
            count++;
        }
        a=a>>1;
    }
cout<<count<<endl;

}

// so finally no of set bits in a^b to find out min bits to change a to b
void change_nos(){
    int a;
    int b;
    a=10;
    b=15;

    no_ofsetbits(a^b);
    no_ofsetbits2ndmethod(a^b);




}

// xor swapping

void xor_swapping(){
    int a=10;
    int b=15;

    a=a^b;
    b=a^b;
    a=a^b;
}

// extract ith bit of a no
// do right shift and check the i th bit by removing all the bits after it

void extract_bit()
{
    int n;
    cin>>n;
    int i;
    cin>>i;

    (1<<i)!=0?cout<<"1"<<endl:cout<<"0"<<endl;
}

// set ith bit to 1
// create a mask then or it with no
// mask is say if i have to change 2nd bit 0100 is mask

void set_bit(){
    int n;int i;
    cin>>n;cin>>i;

    int mask= 1>>i;
    n=n|mask;
}

// clear bit 
// clear ith bit to zero
// make a mask of 1101 if you have to clear 1st bit 
// then take and
// in set bit the ith will be 1 and in clear bit the ith will be 0


void clear_bit()
{
    int n;
    int i;
    n=15;
    i=2;
    int mask =~(1>>i);
    n= n&mask;

}








int  main(){

    int n;
    cin>>n;
    int ar[20];
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }

    unique_no(ar,n);
   
    return 0;
}
