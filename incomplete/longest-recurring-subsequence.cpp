#include<bits/stdc++.h>
using namespace std;

void pali(string s){

    string s1=s;
    reverse(s.begin(),s.end());
     int lar[s.size()+1][s.size()+1];

    for(int i=0;i<=s.size();i++){
        for(int j=0;j<=s1.size();j++){
            if (i==0 || j==0){
                lar[i][j]=0;
            }

            else if(s[i-1]==s1[j-1]){
                lar[i][j]=lar[i-1][j-1]+1;
            }

            else{
                lar[i][j]=max(lar[i-1][j],lar[i][j-1]);
            }
        }
    }

    cout<<lar[s.size()][s.size()];


    }

int main(){
    string s;
    cin>>s;
    pali(s);
}