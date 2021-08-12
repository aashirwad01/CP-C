#include<bits/stdc++.h>
using namespace std;

void kmplps(string s){

    int n=s.size();

    int lps[n];
    
    lps[0]=0;
    int len=0;

    int i=1;
    while(i<n){

        if(s[i] == s[len]){
            len++;
            lps[i]=len;
            i++;
        }
        else {


        if(len!=0){
            len=lps[len-1];
        }
        else{
            lps[i]=0;
            i++;
        }

        }
        

    }
    int res=lps[n-1];
    cout<<res;


}


 

int main(){
    string s;
   
   getline(cin>>ws,s);
   
 kmplps(s);
}
