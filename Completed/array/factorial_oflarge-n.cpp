// { Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution {
public:

vector<int> factorial(int n){
        int i;int j;


int a[10000]={0};
a[0]=1;
int size=1;

int carry=0;
for(i=2;i<=n;i++){

carry=0;

for(j=0;j<size;j++)
{
int p=a[j]*i+carry;

a[j]=p%10;
carry=p/10;
}
while(carry){

    a[size]=carry%10;
    
    carry/=10;
    size++;
}

}

vector<int>v;
for(j=size-1;j>=0;j--){
    v.push_back(a[j]);
   
}



return v;
    }
};

// { Driver Code Starts.

int main() {
    int t=1;
    // cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        vector<int> result = ob.factorial(N);
        for (int i = 0; i < result.size(); ++i){
            cout<< result[i];
        }
        cout << endl;
    }
    return 0;
}  // } Driver Code Ends