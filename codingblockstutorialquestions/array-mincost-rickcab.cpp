#include <bits/stdc++.h>
using namespace std;



void solve(int c1,int c2,int c3,int c4,int n,int m,vector<int>rick,vector<int>cab)
{
    // cout<<c1<<" "<<c2<<" "<<c3<<" "<<c4<<endl;
    // cout<<n<<" "<<m<<endl;
int ve;
for(int i=0;i<n;i++){
    cin>>ve;
    rick.push_back(ve);
}
for( int i=0;i<m;i++){
    cin>>ve;
    cab.push_back(ve);
}
// cout<<"rick"<<endl;
// for(auto x:rick){
//     cout<<x<<endl;
// }
// cout<<"cab"<<endl;
// for(auto x:cab){
//     cout<<x<<endl;
// }

int rickcost=0;

for(int i=0;i<n;i++){
    rickcost+=min(c1*rick[i],c2);
}
rickcost=min(rickcost,c3);

int cabcost=0;

for(int i=0;i<m;i++){
    cabcost+=min(c1*cab[i],c2);
}

cabcost=min(cabcost,c3);

int finalAns=min(c4,cabcost+rickcost);

cout<<finalAns<<" Here"<<endl;
   
}




int main(){
  
   int t=0;
   
    vector<int> rick;vector<int> cab;
    cin >> t;
    while(t--){
        int c1,c2,c3,c4;
        int n;int m;
        cin>>c1>>c2>>c3>>c4;
        cin>>n>>m;
       
        
         solve(c1,c2,c3,c4,n,m,rick,cab);

    }
    
   
    
    return 0;
}
