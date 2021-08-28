#include <bits/stdc++.h>
using namespace std;

void solve(vector<string>s){
    unordered_map<string,vector<string>>st;
    for(int i=0;i<s.size();i++){
        string te(s[i]);
       sort(te.begin(),te.end());
       st[te].push_back(s[i]);
    }
 
 vector<vector<string>>ana;
 
    for(auto it:st){
        vector<string>tem(it.second);
        vector<string>dd;
        
        int si=tem.size();
       
        for(int i=0;i<si;i++){
            dd.push_back(tem[i]);
        }
        ana.push_back(dd);
       
        

    }

    



    
    
    
}

int main(){
    int n;
    cin>>n;
    vector<string>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];

    }
    solve(v);
}