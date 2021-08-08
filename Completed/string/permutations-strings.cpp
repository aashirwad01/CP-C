#include<bits/stdc++.h>
using namespace std;

void per(string s){

    int n=s.size();
    set<string>st;
   
   vector<int>k;
   cout<<s<<endl;
   for( int i=1;i<=n;i++){
       k.push_back(i);
   }
string a;

   for( int j=1;j<tgamma(n+1);j++){
       a="";
      
       next_permutation(k.begin(),k.end());
       for( auto it :k){
            
           string b;
           b=s[it-1];
           a.append(b);
       
    }
    st.insert(a);
    

   }
   
   for(auto it:st){
       cout<<it<<endl;
   }
   

    }

int main(){
    string s;
    cin>>s;
    per(s);
}