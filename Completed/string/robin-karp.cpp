#include<bits/stdc++.h>
using namespace std;

#define d 256

void patsrobin(string pat,string text){
	int m=pat.size();
	int n=text.size();

	 int h=1;
	int p=0;
	int t=0;
	int q=47;
	int i,j;

	h=(int)pow(d,(m-1))%q;

	for( int i=0;i<m;i++){
		p=(p*d + pat[i])%q;
		t=(t*d+text[i])%q;

	}

	for(i=0;i<n-m;i++){
		
		if(p==t){
			for(j=0;j<m;j++){
				if(text[i+j]!=pat[j]){
					break;
				}
			}
			if(j==m){
				cout<<"pat at "<<i<<endl;
			}
		}

		if(i<n-m){
			t=(d*(t - text[i]*h)+text[i+m])%q;
			if( t<q){
				t+=q;
			}
		}

	}


}

int main(){
	string pat;
	string text;
	cin>>pat;

	getline(cin>>ws,text);
	

	patsrobin(pat,text);
}