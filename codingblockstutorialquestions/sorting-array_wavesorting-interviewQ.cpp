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


// wave type sorting 
// two approaches
// sort and then swap alternate elements 
// sort and then pick last element and swap 
// Do without sorting in O(N) sorting takes NlogN
// in doing without sorting maxima is at positions 2 4 6 8 ... so 
// make the left and right ones to this position less than maxima

void solve(vector<int>v)
{

    // for(auto x:v){
    //     cout<<x<<" ";
    // }

    int k=1;
    for(int i=0;i<v.size()-1;i++)
    {

        if((k*v[i])<(k*v[i+1])){
            swap(v[i],v[i+1]);
        }
        else{
            i++;
        }

        k= (k==1)?-1:1;

    }

    for(auto x:v){
        cout<<x<<" ";
    }
	
}
// see the left and right of the 2 , 4 , 6 position elements
// 2,4,6 got to have local maxima
void solve_correct(vector<int>a){
    for(int i=0;i<a.size();i+=2)
    {
        
        //left which should be lesser 
        if(i>0 && a[i-1]>a[i]){
            swap(a[i-1],a[i]);
        }
        //right which should be lesser 
        if(i<=a.size()-2 && a[i+1]>a[i]){
            swap(a[i+1],a[i]);
        }

    }

    for(auto x:a){
        cout<<x<<" ";
    }
}




signed main(){
    fast;
    int t = 1;
    int n;
    cin >> n;

    vector<int>v;
    int val;
    for(int i=0;i<n;i++){
        cin>>val;
        v.push_back(val);
    }
    while(t--){
    	solve(v);
        cout<<endl<<"other ans ,the right one"<<endl;
        solve_correct(v);
    }
    return 0;
}
