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




class Edge{
    public:
    int src;
    int dest;
    int weight;

};

int findParent(int v,int *parent){
    if(parent[v]==v){
        return v;
    }

    return findParent(parent[v],parent);
}



bool compare(Edge e1, Edge e2){
    return e1.weight<e2.weight;
}
void Kruskals(Edge *input,int n,int E){
    sort(input,input+E,compare);
    Edge *output = new Edge[n-1];


int *parent =new int[n];
for(int i=0;i<n;i++){
    parent[i]=i;
}


    int count =0;
    int i=0;
    while(count!=n-1){
        Edge currentEdge=input[i];
        int sourceParent=findParent(currentEdge.src ,parent);
        int destParent=findParent(currentEdge.dest ,parent);

        if(sourceParent != destParent){
            output[count]=currentEdge;
            count++;
            parent[sourceParent]=destParent;
        }
        i++;
    }

    for(int i=0;i<n-1;i++){
        
        cout<<output[i].src<<" "<<output[i].dest<<" "<<output[i].weight<<endl;

    }

}


int main(){
    fast;
    int n,E;
    cin>>n>>E;
    Edge *input =new Edge[E];

    for(int i=0;i<E;i++){
        int s,d,w;
        cin>>s>>d>>w;
        input[i].src=s;
        input[i].dest=d;
        input[i].weight=w;

    }


Kruskals(input,n,E);


    return 0;
}
