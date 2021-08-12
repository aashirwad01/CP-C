#include<bits/stdc++.h>
using namespace std;

void kmplps(char* s , int n ,int * lps){

    

    
    
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
   

}

void patsekmp(string s ,char* pat){

    int i=0;
    int j=0;
    int m=strlen(pat);
    int n=s.size();
    int lps[m];
    kmplps(pat,m,lps);
    while(i<n){

        if(pat[j]==s[i]){
            j++;
            i++;
        }

        if( j==m){
            cout<<"pat at "<<i-j;
            j=lps[j-1];
        }

        else if(i<n && pat[j]!=s[i]){
            if(j!=0){
                j=lps[j-1];
            }
            else{
                i=i+1;
            }
        }
    }


}





 

int main(){
    string s;
   
   getline(cin>>ws,s);
   string p;
    getline(cin>>ws,p);
   char* pat;
  
   pat=&p[0];
//    cout<<pat;

   patsekmp(s,pat);
   
 

}
