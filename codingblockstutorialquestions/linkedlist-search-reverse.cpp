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


// first of all we create a node and insert elements in node

class node{
public:
int data;
node * next;

node(int d){
data =d;
next=NULL;
}
};

// insert at tail to construct a linked list using cin
// fist create a new node
// then if head is null then make that new node to be head 
// or else loop over full linkedlist and assign address of new node to last node

void insertAtTail(node* &head,int d){
    node * n = new node(d);
    if(head==NULL){
        n->next=head;
       head=n;
    }
    else {
        node * temp = head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=n;
    }


}

// using insertAtTail we can create a linkedlist 

void buildList(node *&head){
    int data;
    cin>>data;
    while(data!=-1){
        insertAtTail(head,data);
        cin>>data;
    }
}

void reverseList(node *&head){
    // we will not swap rather make the pointer point in reverse direction
    // as copying and swapping can be very costly affair
    // we take three variables prev, current and n
    // prev is initially null current is at head and n is to be assigned to next element without losing any node in redefinition of connection
    // so we assign n next as current then current next as  prev
     // then prev is current and current is n
    node * prev= NULL;
    node * current = head;
    node * n ;

    while(current!=NULL){
        n=current->next;
  
    current->next=prev;
    prev=current;
    current=n;
    }
    head= prev;
    
}
bool searchListRecursive(node * head , int key){
    if(head==NULL){return false;}
    if(head->data==key){
        return true;
    }
    else{
        searchListRecursive(head->next,key);
    }
}

bool searchList(node * head, int key){
    while(head!=NULL){
        if(key==head->data){
            cout<<"Mil gaya";
            return true;
        }
        else{
            head=head->next;
        }
    }
    return false;
}

void solve(){
	
}




signed main(){

    fast;
  node * head = NULL;
    return 0;
}
