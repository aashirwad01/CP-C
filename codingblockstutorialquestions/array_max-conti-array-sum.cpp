#include <bits/stdc++.h>
using namespace std;

void solven2(int n)
{
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int csum = 0;
    int msum = INT16_MIN;
    int maxsum = INT32_MIN;
    int i = 0;
    int f = 0;
    while (f < n)
    {

        csum += a[i];
        i++;
        if (csum < 0)
        {
            csum = 0;
        }
        msum = max(csum, msum);

        if (i == n)
        {
            i = (i % n);
        }

        if (i == f)
        {
            f++;

            csum = 0;

            i = f;
        }
    }
    cout << msum<<endl;
}

void solven1(int n){
    int a[n];
    int cumsum=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        
    }
    
    int minsum=INT16_MAX;
    int cummin=0;
    int cummax=0;
    int maxsum=INT16_MIN;

    for(int i=0;i<n;i++){
        cumsum+=a[i];
        cummin+=a[i];
        cummax+=a[i];
        maxsum=max(cummax,maxsum);
        minsum=min(cummin,minsum);

        if(cummin>0){
            cummin=0;
        }
        if(cummax<0){
            cummax=0;
        }
        
    }

    cout<<max(maxsum,(cumsum-minsum));


}



int main()
{

    long long int t = 0;

    cin >> t;

    solven2(t);
    solven1(t);

    return 0;
}
