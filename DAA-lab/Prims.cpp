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

 void bfs(int src){
    queue<int>q;
    bool *visited=new bool[V+1]{0};
   
    
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
                
            }
        }
    }
    cout<<endl;
   
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

    dfs_helper(src,visited);
}

};





int main(){
    fast;

    Graph g(6);
    g.addEdge(0,1);
    g.addEdge(1,2);
    
    g.addEdge(2,3);
   
    g.addEdge(3,4);
    g.addEdge(4,5);
    g.addEdge(3,0);
    
    // g.printAdjList();
    cout<<"BFS"<<endl;
    g.bfs(0);
    cout<<"DFS"<<endl;
    g.dfs(0);
    cout<<endl;

    #ifndef ONLINE_JUDGE
        cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}