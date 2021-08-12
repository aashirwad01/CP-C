//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

int wordBreak(string A, vector<string> &B);

// User code will be pasted here

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<string> dict;
        for(int i=0;i<n;i++){
            string S;
            cin>>S;
            dict.push_back(S);
        }
        string line;
        cin>>line;
        cout<<wordBreak(line, dict)<<"\n";
    }
}
// } Driver Code Ends


//User function template for C++

// A : given string to search
// B : vector of available strings

int wordBreak(string f, vector<string> &s) {
   map<string,int>mp;
    int a=0;
    int b=0;
    int n=s.size();

    for(int i=0;i<n;i++){
        mp[s[i]]++;
    }

    for(int i=0;i<f.size();i++){
        for(int j=i;j<f.size();j++){
            string k=f.substr(i,j-i+1);
           
            if(mp.find(k)!=mp.end()){

                auto it=mp.find(k);
                b=b+it->first.size();
                a=a+(j-i+1);
                
              
                i=j+1;
                
            }

            
        }
    }

if(a==f.size()){
   return 1;
}
else {
  return 0;
}
	
}