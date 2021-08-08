#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long ll;typedef long double ld;typedef pair<int,int> pii;
#define F first
#define S second
#define PB push_back
#define MP make_pair



void firstlast(int n){
    int i;int val;
    
    int j;
    vector<int>v;
    // cout<<"Enter sorted Array"<<endl;
    for (i=0;i<n;i++){
        cin>>j;
        v.push_back(j);
    }
   
    // cout<<"Enter value to be searched"<<endl;
    cin>>val;
    int mid=0;
    int l=0;
    int h=n-1;
    i=l;
    
    while(true){
        
        if(h<l)
    {cout<<"Not found"<<endl;
    break;}

        mid=(l+h)/2;
        
        if (mid==0 || ( val>v[mid-1] && v[mid]==val)){
            cout<<"First instance is "<<mid<<endl;break;
        }
        else if(v[mid]<val){
            l=mid+1;
            i=l;
           
           
        }
        else{
            h=mid-1;
            n=h;
            
        }
    }

        while(true)
    {
        
        if(h<l)
         {cout<<"Not found"<<endl;
            break;}

        mid=(l+h)/2;
        
        if (mid==n-1 || ( val<v[mid+1] && v[mid]==val)){
            cout<<"Last instance is "<<mid<<endl;break;
        }
        else if(v[mid]>val){

           h=mid-1;
            n=h;
             
            
           
        }
        else{
            l=mid+1;
            i=l;
           
        }
        
    }
    
    
}





void binarysearch(int n){
     int i;int val;
    
    int j;
    vector<int>v;
    
    for (i=0;i<n;i++){
        cin>>j;
        v.push_back(j);
    }
   
   
    cin>>val;
    int mid=0;
    int l=0;
    int h=n-1;
    i=l;
    
    while(true){
        
        if(h<l)
    {cout<<"Not found"<<endl;
    break;}

        mid=(l+h)/2;
        
        if (v[mid]==val){
            cout<<"Element found at "<<mid<<endl;break;
        }
        else if(v[mid]<val){
            l=mid+1;
            i=l;
           
           
        }
        else{
            h=mid-1;
            n=h;
            
        }
    }

        
        
    
    
    
}

void peak(int n, int a[]){
    int i;
    for(i=0;i<n;i++){
        if(i==0 && a[i]>a[i+1]){cout<<a[i]<<" ";}
        else if(i==n-1 && a[i]>a[i-1]){cout<<a[i]<<" ";}
        else if(i>0 && i<n-1 && a[i]>a[i-1] && a[i]>a[i+1]){cout<<a[i]<<" ";}
    }
}



void noofinversions(int n,int a[]){
    vector<int>ar;
    int i;
    for(i=0;i<n;i++){
        ar.push_back(a[i]);
    }

    sort(ar.begin(),ar.end());
    int s;s=0;int m;
    for(i=0;i<n;i++){
        auto k=find(ar.begin(),ar.end(),a[i]);
        s=s+distance(ar.begin(),k);
        ar.erase(k);
      
        
       
    }
    cout<<s<<endl;
	
}



pair<int,int> maxminele(int a[],int l,int h,int n)
{
    int minm=INT16_MAX;
    int maxm=INT16_MIN;
    
    if(l==h)
    {
        
            maxm = a[l];
        
 
              
            minm = a[h];
        
        
    return make_pair(minm,maxm);
    }

    if(h-l==1)
    {
        if(a[l]>a[h]){
            maxm=a[l];
            minm=a[h];
        }
        else{
            maxm=a[h];
            minm=a[l];
        }
        

   
    return make_pair(minm,maxm);


    }


    int mid=(l+h)/2;
    pair<int,int>p1=maxminele(a,l,mid,n);
    pair<int,int>p2=maxminele(a,mid+1,h,n);

    minm=min(p1.first,p2.first);
    maxm=max(p1.second,p2.second);

    
    return make_pair(minm,maxm);
}




int main(){
    fast;
    int n;
    int t = 1;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    while(t--){
        //i
        firstlast(n);
        //ii
        binarysearch(n);
        //iii
        peak(n,a);
        //iv
        noofinversions(n,a);
        //v
        pair<int,int>pp=maxminele(a,0,n-1,n);
        cout<<"Minimum "<<pp.first<<" "<<"Maximum"<<" "<<pp.second<<endl;
    }


    #ifndef ONLINE_JUDGE
        cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif
    return 0;
}
