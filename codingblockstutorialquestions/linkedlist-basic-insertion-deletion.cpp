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

// insertion and deletion in a linked list
// we start with insertion
// insert at head, insert at tail, and insert at middle given position

// defining self referntial class node
class node{
    public:
    int data;
    node * next;
    // constructor
    node(int d){
        data = d;
        next = NULL;
    }
};



//insert at head
// point new node next to head
// and then make new node head


void insertAtHead (node * &head,int data)
{
node * n = new node(data);
n->next=head;
head=n;


}

// insert at position given say p, position here is starting from 1.
// jump till p-1 steps to reach pth position
// at that position create new node
// point new node next to temp next
// temp next is new node 


void insertAtMiddle( node * &head,int data , int p)
{

      // create a new node 
    // reach the position previous to p
    // insert element there

    
    if(head==NULL || p==0){
        insertAtHead(head,data);
    }
    else{
         node * n= new node(data);
    node * temp=head;
    while(p>1)
    {
        temp=temp->next;
        p--;
        
    }
    n->next=temp->next;
    temp->next=n;

    }
    
  
   

}

// reach till temp next == NULL 
// then create new node 
// temp next is new node 
// new node next is NULL already

void insertAtTail(node * &head,int data)
{
    
    if(head==NULL){
        insertAtHead(head,data);
    }
    else 
    {

        node * n = new node(data);
        
        node * temp = head;
        while(temp->next !=NULL){
            temp=temp->next;

        }
        temp->next = n;





    }

}

// deleting nodes from linked list
// point head to head next and then delete prev head
// so store head in temp at first then do those


void deleteAtHead(node * &head)
{
    node * temp = head;
    head = head->next;
    delete(temp);
}

// delete at tail
// reach the tail till temp next is null
// and then keep tail in prev 
// make prev next null and delete temp

void deleteAtTail(node * head){
    node * temp = head;
    node * prev = NULL;
    while(temp->next !=NULL){
        prev = temp;
        temp=temp->next;


    }
    delete(temp);
    prev->next=NULL;


}

// delete at middle
// reach the pth position keep previous stored
// make prev next = temp next and then delete temp

void deleteAtMiddle(node * &head,  int p){
    node * prev =NULL;
    node * temp = head;
    while(p>1){
        prev=temp;
        temp=temp->next;
        p--;

    }

    prev->next=temp->next;
    delete(temp);


}





signed main(){
    fast;
    node * head = NULL;
    insertAtHead(head,5);
    insertAtMiddle(head,6,2);
    insertAtTail(head,3);
    deleteAtHead(head);
    deleteAtMiddle(head,2);
    deleteAtTail(head);
    // int t = 1;
    // cin >> t;
    // while(t--){
    // 	solve();
    // }
   
    return 0;
}
