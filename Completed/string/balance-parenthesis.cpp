#include<iostream>

#include<stdlib.h>
#include<bits/stdc++.h>
using namespace std;

bool solve(string x){

    stack<char>s;
    char c;
    for (int i=0;i<x.size();i++){
        if(x[i]=='('|| x[i]=='{' ||x[i]=='['){
            s.push(x[i]);
            continue;
        }

        if(s.empty()){
            return false;
        }

        switch(x[i]){
            case ')':
            c=s.top();
            s.pop();
            if(c=='{'|| c=='['){
                return false;
            }
            break;

            case ']':
            c=s.top();
            s.pop();
            if(c=='{'|| c=='('){
                return false;
            }
            break;

            case '}':

            c=s.top();
            s.pop();
            if(c =='('|| c=='['){
                return false;
            }
            break;

        }
    }

       cout <<    s.empty()<<endl;

       return(s.empty());

        }
    
    


int main(){
    string s;
    cin>>s;
    cout<<solve(s);
    return 0;
}
