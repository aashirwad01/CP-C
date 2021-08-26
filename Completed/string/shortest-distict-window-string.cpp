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




bool solve(string s,string temp){
   set<char>st;
   for(int i=0;i<s.size();i++){
       st.insert(s[i]);

   }
   

  
   int f=0;
   auto it=st.begin();

   if(temp.size()>=st.size()){
       int i=0;
       for( auto it : st){
       if(temp.find(it)==string:: npos){
           f=1;
           break;
       }
       else{
           continue;
       }
      

   }

   }
   else {return 0;}

    if(f==0){
           return 1;

       }
       else {
           return 0;
       }
   
	
}

void solvethis(string s){
    int min=s.size();
    string me="";
    for( int i=0;i<s.size();i++){
        for(int j=1;j<s.size();j++){
            string temp=s.substr(i,j);
            cout<<temp<<" ";
            if(solve(s,temp)){
                // cout<<temp<<endl;
                if(min>temp.size()){
                    min=temp.size();
                    me=temp;
                }
                
            }

        }
        cout<<endl;
        
    }
    if(min==s.size()){
        me=s;
    }
    cout<<me<<" "<<min;
}


void solveoptimal(string s){

     set<char>st;
   for(int i=0;i<s.size();i++){
       st.insert(s[i]);

   }

   int min=s.size();
    string me="";
    for( int i=0;i<=s.size()-st.size();i++){
        for(int j=st.size();j<s.size();j++){
            string temp=s.substr(i,j);
            cout<<temp<<" ";
            if(solve(s,temp)){
                // cout<<temp<<endl;
                if(min>temp.size()){
                    min=temp.size();
                    me=temp;
                }
                
            }

        }
        cout<<endl;
        
    }
    if(min==s.size()){
        me=s;
    }
    cout<<me<<" "<<min;



}

void solvemore(string s){
    int n=s.size();
    string ar[n+1][n+1];
    int i=0;int j=0;
    for(i=0;i<=n;i++){
        ar[i][0]="";
    }
    for(i=0;i<=n;i++){
        for(j=1;j<=n;j++){
            string ch="";
            ch=s[i+j-1];
            if(ar[i][j-1]!=ch){
                ar[i][j]+=ar[i][j-1]+ch;
            }
            else {
                 ar[i][j]=ar[i][j-1];
            }

        }
    }

    
   int min=s.size();
   string me="";

    for( i=0;i<=n;i++){
        for(j=0;j<=n-i;j++){
            string temp=ar[i][j];
            if(solve(s,temp)){
               
                if(min>temp.size()){
                    min=temp.size();
                    me=temp;
                }
                
            }
        }
        
    }
    if(min==s.size()){
        me=s;
    }

    cout<<me<<" "<<min;

   
    
}

void solveok(string s){
     int n=s.size();
    string ar[n+1][n+1];
    int i=0;int j=0;
    for(i=0;i<=n;i++){
        ar[i][0]="";
    }
    for(i=0;i<=n;i++){
        for(j=1;j<=n;j++){
            string ch="";
            ch=s[i+j-1];
           
            if(ar[i][j-1].find(ch)==string:: npos){
                ar[i][j]+=ar[i][j-1]+ch;
            }
            else {
                 ar[i][j]=ar[i][j-1];
            }

        }
    }

     set<char>st;
   for(int i=0;i<s.size();i++){
       st.insert(s[i]);

   }
   string che="";

   for(auto it:st){
       che=che+it;

   }
  

int mi=s.size();
string me=s;

    for(i=0;i<=n;i++){
        for(j=0;j<=n-i;j++){
            // cout<<ar[i][j]<<" "<<j<<" ";
            sort(ar[i][j].begin(),ar[i][j].end());
            if(ar[i][j]==che){
                if(mi>j){
                    mi=j;
                    me=ar[i][j];
                }

            }
        }
       
    }
while(me.size()!=mi){
    me+="k";
}
cout<<me<<" "<<mi;
    
}


void geeks_sliding_window(string s){

}




signed main(){
    fast;
    int t = 1;
    string s;
    cin >> s;
    while(t--){
    	solveok(s);
    }
    return 0;
}
