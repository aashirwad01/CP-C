#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long ll;typedef long double ld;typedef pair<int,int> pii;
#define F first
#define S second
#define PB push_back
#define MP make_pair
const ll mod = 1e9+7, N = 2e6+7, M = 2e6+7, INF = INT_MAX/10;
ll powe(ll x, ll y){ x = x%mod, y=y%(mod-1);ll ans = 1;while(y>0){if (y&1){ans = (1ll * x * ans)%mod;}y>>=1;x = (1ll * x * x)%mod;}return ans;}




class Graph{
 int V;
 list<int> *adjList;

public :

Graph(int v){
     V=v;
     adjList=new list<int>[V];
 }
 void addEdge(int u,int v,bool bidir=true){
     adjList[u].push_back(v);
     if(bidir){
         adjList[v].push_back(u);
     }
 }

 void printAdjList(){
     for(int i=0;i<V;i++){
         cout<<i<<" ->";
         for(int node:adjList[i]){
             cout<<node<<",";

         }
         cout<<endl;
     }
 }
void bfs(int src,int dest){
    queue<int>q;
    bool *visited=new bool[V+1]{0};
    int *dist=new int[V+1]{0};
    int *parent =new int[V+1];
    for(int i=0;i<V;i++){
        parent[i]=-1;
    }
    q.push(src);
    visited[src]=true;
    while(!q.empty()){
        int node = q.front();
        cout<<node<<" ";
        q.pop();
        for(int n:adjList[node]){
            if(!visited[n]){
                q.push(n);
                visited[n]=true;
                dist[n]=dist[node]+1;
                parent[n]=node;
            }
        }
    }
    cout<<endl;
    for(int i=0;i<V;i++){
        cout<<i<<" Node having dist "<<dist[i]<<endl;
    }
    cout<<"Shortest distance is "<<dist[dest]<<endl;;
    cout<<"Shortest path  ";
    int temp=dest;
    while(temp!=-1){
        cout<<temp<<"<--";
        temp=parent[temp];
    }
}
void dfs_helper(int src,bool* visited){
cout<<src<<" ";
visited[src]=true;
for(int n:adjList[src] ){
    if(!visited[n]){
        dfs_helper(n,visited);

    }
}
}

void dfs(int src){
    bool *visited = new bool[V+1]{0};
//     for(int i=0;i<V;i++){
//         int n=i;
//         visited[n]=false;
// }
    dfs_helper(src,visited);
}

};

template<typename T>

class Generic_Graph{
    map<T,list<T>>adjList;

public:
    Generic_Graph(){

    }
    void addEdge(T u,T v,bool bidir=true){
        adjList[u].push_back(v);
        if(bidir){
            adjList[v].push_back(u);
        }
    }
    void printjAdList(){
        for(auto x:adjList){
            T key = x.first;
            cout<<key<<"->";
        for (T e:x.second) {
            cout<<e<<",";
        }
        cout<<endl;   
        }
    }

};



int main(){
    fast;

    Graph g(6);
    g.addEdge(0,1);
    g.addEdge(1,2);
    // g.addEdge(0,4);
    // g.addEdge(2,4);
    // g.addEdge(3,2);
    g.addEdge(2,3);
    // g.addEdge(3,5);
    g.addEdge(3,4);
    g.addEdge(4,5);
    g.addEdge(3,0);
    
    // g.printAdjList();
    g.bfs(0,5);
    g.dfs(0);
    cout<<endl;
   
   Generic_Graph<string> g1;
   g1.addEdge("Amritsar","Delhi");
   g1.addEdge("Amritsar","Jaipur");
   g1.addEdge("Delhi","Siachen");
   g1.addEdge("Delhi","Banglore");
   g1.addEdge("Delhi","Agra");
   g1.addEdge("Amritsar","Siachen");

    g1.printjAdList();
    
    return 0;
}




