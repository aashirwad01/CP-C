#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long ll;typedef long double ld;typedef pair<int,int> pii;
#define F first
#define S second
#define PB push_back
#define MP make_pair



class Graph{
 int V;
 list<pair<int,int>>*l;

public :

Graph(int v){
     V=v;
     l=new list<pair<int,int>>[V];
 }
 void addEdge(int u,int v,int w){
    l[u].push_back(make_pair(w,v));
    l[v].push_back(make_pair(w,u));


 }

 int find(bool* visited , int* weight ,int v){
     int minvertex=-1;
     for(int i=0;i<v;i++){
         if(!visited[i]&&(minvertex==-1||weight[i]<weight[minvertex]))
         {
             minvertex=i;
         }
     }
     return minvertex;
 }

 void prim(){
     bool* visited = new bool[V];
     int *parent =new int [V];
     int* weight =new int[V];

    for(int i=0;i<V;i++){
        weight[i]=INT_MAX;
        visited[i]=false;
    }

    parent[0]=-1;
    weight[0]=0;

    for(int i=0;i<V-1;i++){
        int minvertex=find(visited,weight,V);
        visited[minvertex]=true;

        for(auto n:l[minvertex]){
            if(!visited[n.second]){
                if(weight[n.second]>n.first){
                    weight[n.second]=n.first;
                    parent[n.second]=minvertex;
                }
            }
        }

    }

for(int i=1;i<V;i++)
        {
            cout<<i<<"--"<<parent[i]<<" with weight "<<weight[i]<<"\n";
        }


 }


};




int main(){
    fast;

    int n,m;
    cin>>n>>m;


    Graph g(n);
    for(int i=0;i<m;i++){
        int x,y,w;
        cin>>x>>y>>w;
        g.addEdge(x,y,w);
    }
    g.prim();
    
    
    #ifndef ONLINE_JUDGE
        cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}
