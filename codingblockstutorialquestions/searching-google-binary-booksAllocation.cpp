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

// Question is book allocation Google interview
// Given pages of books in ascending order and given no of students
// distribute books in such a way to minimize max pages a student reads
// using binary search
// find sum of pages then search on the min pages=ar[n] to max pages
//compute mid then see if all the students can get pages to read less than or equal to mid
// if not then move forward i.e increase s = mid +1
// else if try to find value where s==e such that best value is achieved
// can be tried in word wrap also which was solved using dp try that too.


void solve(int ar[20] , int n, int m)
{
    
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=ar[i];

    }
    int ans=-1;
    int sm[m]={0};
    int s=0;int e=sum;
    int mid=(s+e)/2;
    while(s<=e){
        
        int j=0;int i=0;
        for(i=0;i<m;){
            
            while(sm[i]+ar[j]<=mid){
                cout<<"mid is "<<mid<<endl;
                sm[i]+=ar[j];
                j++;
                cout<<sm[i]<<" "<<i<<endl;
            }
            i++;
        }
        if(s==e){
            // cout<<mid<<endl;
            break;
        }
        if(j<n){
           s=mid+1; 
        }
        else if(j==n && s<e){
            ans = mid;
            e=mid-1;
        }
        
        mid=(s+e)/2;
       std::fill(sm,sm+m,0);
       
        

       
    }

   cout<<ans<<endl;
   
	
}
bool isValidConfig(int books[20],int n,int m,int ans)
{
    int students=1;
    int current_pages=0;
    for(int i=0;i<n;i++){
        if(current_pages+ books[i]>ans){
            current_pages=books[i];
            students++;
            if(students>m){
                return false;
            }
        }
        else{
            current_pages+=books[i];
        }
    }

    return true;

}

void binarysearch_books(int books[20],int n,int m){
    int sum_pages=0;
    
    for(int i =0;i<n;i++){
        sum_pages+=books[i];
    }
    int s=books[n-1];
    int e=sum_pages;
    int finalAns=s;
    while(s<=e){
        int mid=(s+e)/2;
        if(isValidConfig(books,n,m,mid)){
            // True then search in left part to minimise the value
            finalAns=mid;
            e=mid-1;
        }
        else{
            // false then move in right part 
            s = mid +1;
        }
    }

    cout<<finalAns<<endl;
}



signed main(){
    fast;
    int t = 1;
   int n;
   cin>>n;
   int a[20];
   int m;
   cin>>m;
   for(int i=0;i<n;i++){
       cin>>a[i];
   }
  
    while(t--){
    // solve(a,n,m);
    binarysearch_books(a,n,m); 
       
    }
    return 0;
}
