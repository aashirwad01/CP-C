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


bool is_v(string c){
   vector<string>ips;
   string ex="";
   for(int i=0;i<c.size();i++){
       if(c[i]=='.'){
           ips.push_back(ex);
           ex="";
       }
       else{
           ex+=c[i];
       }

   }
   ips.push_back(ex);

   for (int i = 0; i < ips.size(); i++) {
        // cout << ips[i] <<endl;
        if (ips[i].length() > 3
            || stoi(ips[i]) < 0
            || stoi(ips[i]) > 255)
            return 0;
 
        if (ips[i].length() > 1
            && stoi(ips[i]) == 0)
            return 0;
 
        if (ips[i].length() > 1
            && stoi(ips[i]) != 0
            && ips[i][0] == '0')
            return 0;
    }
    return 1;
}



void solve(string s){
    if(s.size()>12 && s.size()<4){
        cout<<"Not valid";
        return ;
    }
    string check = s;
    vector<string>ans;
for(int i=1;i< s.size()-2;i++){
    for(int j=i+1;j<s.size()-2;j++){
        for( int k=j+1;k<s.size();k++){
            check=check.substr(0,k)+"."+check.substr(k);
             check=check.substr(0,j)+"."+check.substr(j);
              check=check.substr(0,i)+"."+check.substr(i);
              if(is_v(check)){
                  ans.push_back(check);
                  cout<<check<<endl;
              }
               check =s;
        }
       

    }

}


	
}

bool isval(string s){
    vector<string>ips;
    string ex="";
    for( int i=0;i<s.size();i++){
        if(s[i]=='.'){
            ips.push_back(ex);
        }
        else{
            ex+=s[i];
        }
    }

        ips.push_back(ex);
        for(int i=0;i<ips.size();i++){
            if( ips[i].length()>3 || stoi(ips[i])<0 || stoi(ips[i])>255 ){
                return 0;
                
            }
            if(ips[i].length()>1 && stoi(ips[i])==0){
                return 0;
            }
            if (ips[i].length() > 1
            && stoi(ips[i]) != 0
            && ips[i][0] == '0'){

            return 0;
    }
    return 1;

    }
}


void with_dp(string s){

    int l=s.size();
    int dp[4][l]={0};
    for(int i=0;i<4;i++){
        for(int j=l-1;j>=0;j--){
            if(i==0){
                string sub = s.substr(j);
                if(isval(s)){
                    dp[i][j]=1;
                }
                else if(j<l-3){
                    break;
                }
            }
                else{
                    if(j<=l-i){
                        for(int k=1;k<=3 && j+k<=l;k++){
                            string temp=s.substr(j,j+k);
                            if( isval(temp)){
                                if((j+k<l) && dp[i-1][j+k]==1){
                                    dp[i][j]=1;
                                    break;
                                }

                            }
                        }

                    }


                }
            }

        }

        if(dp[3][0]==0){
            
        }
    }

    





int main(){
    fast;
    int t = 1;
    string s;
    cin >> s;
    while(t--){
    	solve(s);
    }
    return 0;
}
