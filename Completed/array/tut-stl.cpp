#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>

using namespace __gnu_pbds;
using namespace std;

bool f( int x , int y )
{
    return x>y;
}
void vecdemo()
{
     vector<int> A={11,2,3,14};
   cout<<A[1]<<endl;
   sort(A.begin(),A.end()) ;

   bool present = binary_search(A.begin(),A.end(),3);
   present = binary_search(A.begin(),A.end(),4);

   A.push_back(100);
   present=binary_search(A.begin(), A.end(),100);
   A.push_back(100);
   A.push_back(100);
   A.push_back(100);
   A.push_back(123);
   
   vector<int>::iterator it = lower_bound(A.begin(), A.end(),100);
   vector<int>::iterator it2 = upper_bound(A.begin(), A.end(),100);
   cout<< *it <<" " << *it2<<endl;
   cout<<it2 - it <<endl;

   sort (A.begin(),A.end(),f);
   vector<int>::iterator it3;
   for (it3=A.begin();it3!=A.end();it3++)
   {
       cout<<*it3<<" ";
   }
   cout<<endl;

   for (int &x:A)
   {
       x++;
       cout<< x <<" ";

   }

   
}
void setdemo()
{
    set<int> S;
    S.insert(1);
    S.insert(2);
    S.insert(-10);

    for ( int x : S)
    {
        cout<<x<<" ";
    }
    cout<<endl;
auto it = S.find(-1);
if (it==S.end())
{
    cout<<"Element not present\n";
}
else
{
    cout<<"Present"<<*it<<endl;
}

auto it2=S.lower_bound(-1);
auto it3=S.upper_bound(-1);
cout<<*it2<<" "<<*it3<<endl;



}

void mapDemo()
{
    map<int , int>A;
    A[1]=100;
    A[2]=-1;
    A[3]=200;

    map<char , int> cnt;
    string x= "aashirwad";
    for ( char c:x)
    {
        cnt[c]++;
    }

    cout<<cnt['a']<<" "<<cnt['i']<<endl;
}

typedef  tree<int,null_type, less<int>,rb_tree_tag,tree_order_statistics_node_update> pbds;

void pbd()

{
    pbds arr;
    for (int i=0;i<10;i++)
    {
        arr.insert(i);
    }
    cout<< *arr.find_by_order(0)<<endl;
    cout<< *arr.find_by_order(2)<<endl;
    cout<<arr.order_of_key(5);
    }

void ordmap()
{
   map<int,float> mp;
   mp[2]=3.0;
   mp[1]=4.2;
   unordered_map<int,int>ump;
   ump[2]=2;
   ump[9]=7;
   ump[3]=5;

   if(ump.find(2)==ump.end())
   {
       cout<<"not found\n";
   }
   else{
       cout<<"Found\n";
   }

   for (auto it = mp.begin();it!=mp.end();it++)
   {
       cout<<it->first<<" "<<it->second<<endl;

   }
}

void st_que_llist()
{
    stack<int>st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);

    cout<<st.top();

    queue<int>qu;
    qu.push(1);
    qu.push(2);
    cout<<qu.front();

    deque<int>dq;
    dq.push_back(10);
    dq.push_front(20);
    dq.pop_back();
    dq.pop_front();

    list<int>li;
    li.push_back(10);
    //same as deque

    cout<<li.front();
    cout<<li.back();

    li.reverse();

}
int main()
{
    
    
    //vectorprob();
    ordmap();
     #ifndef ONLINE_JUDGE
        cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif
    

}

