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


//O(N) O(N)

int solve(int a[],int n){

    unordered_set<int>s;
    for(int i=0;i<n;i++){

        if(s.find(a[i])!= s.end())
            {return a[i];}
        
        s.insert(a[i]);
        
    }


	return -1;
}

//O(N) O(1) xor based approach where x^x=0 so for finding single duplicate no

int solve_xor(int a[],int n)
{
int res=0;
for (int i=0;i<n;i++){
    res=res^a[i];
    // if(res==0 && i!=0)
    {cout<<res<<endl;}
}
// res=res^a[n-1];
return res;
}


//indexing based

int solve_index(int a[],int n){
    int mis=0;
    for (int i=0;i<n;i++){
        int e=a[abs(a[i])];
        if(e<0){
            mis=a[i];
            break;
        }

        a[abs(a[i])]=-a[abs(a[i])];
    }

    return abs(mis);
}

// cycle detection floyds tortoise hare this works on idea that we use two pointers to traverse the array and
// if they meet twice a loop forms then  

class Node{
    public:
    int data;
    Node* next;
};

void push(Node** head,int ndata){
    Node* nnode = new Node();
    nnode->data= ndata;
    nnode->next=*head;
    *head= nnode;
}
int solve_u(Node* list){

    Node *slow=list;Node* fast_p=list;
    while(slow && fast_p && fast_p->next){
        slow=slow->next;
        fast_p=fast_p->next->next;
        if(slow==fast_p){
            return fast_p->data;
        }

    }
}

int main(){
    fast;
    int j, n;
    int t = 1;
    cin >> n;
    int a[n];

    for (int i=0 ;i<n;i++){
        cin>>a[i];

    }

    
    while(t--){
    	cout<<solve_xor(a,n);
    }
    return 0;
}
