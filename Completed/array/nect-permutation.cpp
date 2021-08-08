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




void solve(vector<int>&nums){
	

int i,k,s;i=0;k=0;s=0;
while(i<nums.size()){
    k=nums[i]*pow(10,(nums.size()-i-1));
    s=s+k;
    i++;
}
int s1;i=0;int f=0;
while(f==0){
    
    s=s+9;
    s1=s;
    
    while(s1)
    {
        if(find(nums.begin(),nums.end(),s1%10)==nums.end())
    {f=1;break;}
    else
    {s1=floor(s1/10);}
    }
    if(f==0){
        
        break;
    }
    f=0;

}
int sa=s;int ia=0;
while(sa){
    ia++;
    sa=floor(sa/10);
}

int sz=nums.size();
cout<<ia<<sz<<endl;
if(ia==sz){
while(i<sz)
    {
        
       nums[i]= floor(s/pow(10,sz-i-1));
       s=s-nums[i]*pow(10,sz-i-1);
       i++;
      
    }
    
for(auto x:nums){
    cout<<x;
}
}
else{
    sort(nums.begin(),nums.end());
    for(auto x:nums){
    cout<<x;
}

}
}

void solve_final(vector<int>&v)
{
    int i;
int n=v.size();

for(i=n-2;i>=0;i--){
    
        if(v[i]<v[i+1]){
            break;
    
    }
}
    if(i<0){
        reverse(v.begin(),v.end());
        
    }
    else{
        int j;
for(j=n-1;j>i;j--){
    if(v[j]>v[i]){
       
        break;
    }
}
swap(v[j],v[i]);
reverse(v.begin()+i+1,v.end());



}
cout<<v[0]<<v[1]<<v[2]<<endl;


}

void solve_algo(vector<int>&s){
    
    next_permutation(s.begin(),s.end());
    
    for(auto x:s){
        cout<<x;
    }
}




int main(){
    // fast;
    int t = 1;
    vector<int>v;
    int i;
    while(cin>>i){
        v.push_back(i);
        
    }
    


    while(t--){
    	solve_algo(v);
    }
    return 0;
}
