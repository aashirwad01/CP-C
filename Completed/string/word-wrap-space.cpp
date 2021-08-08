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




void solve(vector<int>v,int n){
    int t=0;
    int f=0;
    int n1=n;
    int k=n;
    int s=0;
    int m=INT16_MAX;
    int si=v.size();

    for(int i=0;i<si;){

        while(t--){
            if(i!=si-1){
                k=k-v[i];
                s=s+(k*k);
            }
        }

        if(i!=si-1){
            if(k>v[i]+f){
                k=k-v[i];
                f++;i++;
            }

            else{
                s=s+(k*k);i++;f=0;k=n1;
            }
        }

        if(i==si-1){
            t++;i=0;m=min(m,s);s=0;
        }

        if(t==si){
            break;
        }
    } 

    cout<<m<<endl;
	
}

// void printso(int p[],int n){
   
//     if(p[n]==1){
        
//     }
//     else{
//         printso(p,p[n]-1);
//     }

//     cout<< p[n]<<" "<<n<<" ";
   
// }
//

void solve_another(vector<int>v,int k )
{
   int n=v.size();
    int ext[n+1][n+1];

int lc[n+1][n+1];
int c[n+1];
int p[n+1];

int i,j;

for( i=1;i<=n;i++){
    ext[i][i]=k-v[i-1];
    for(j=i+1;j<=n;j++){
        ext[i][j]=ext[i][j-1]-v[j-1]-1;
    }
}

for( i=1;i<=n;i++){
    for(j=i;j<=n;j++){

        if(ext[i][j]<0){
            lc[i][j]=INT16_MAX;
        }
        else if( j==n && ext[i][j]>=0){
            lc[i][j]=0;
        }
        else{
            lc[i][j]=ext[i][j]*ext[i][j];
        }
    }
}
c[0]=0;
for(j=1;j<=n;j++){
    c[j]=INT16_MAX;
    for(i=1;i<=j;i++){
        if(c[i-1]!=INT16_MAX && lc[i][j]!=INT16_MAX && (c[i-1]+lc[i][j]<c[j])){
            c[j]=c[i-1]+lc[i][j];
            p[j]=i;
        }

    }
}

cout<<c[n-1]<<endl;

// printso(p,n);

}

// C++ program for space optimized
// solution of Word Wrap problem.


// Function to find space optimized
// solution of Word Wrap problem.
void solveWord(vector<int>arr, int k)
{
	int n= arr.size();
    int i, j;

	// Variable to store number of
	// characters in given line.
	int currlen;

	// Variable to store possible
	// minimum cost of line.
	int cost;

	// DP table in which dp[i] represents
	// cost of line starting with word
	// arr[i].
	int dp[n];

	// Array in which ans[i] store index
	// of last word in line starting with
	// word arr[i].
	int ans[n];

	// If only one word is present then
	// only one line is required. Cost
	// of last line is zero. Hence cost
	// of this line is zero. Ending point
	// is also n-1 as single word is
	// present.
	dp[n - 1] = 0;
	ans[n - 1] = n - 1;

	// Make each word first word of line
	// by iterating over each index in arr.
	for (i = n - 2; i >= 0; i--) {
		currlen = -1;
		dp[i] = INT_MAX;

		// Keep on adding words in current
		// line by iterating from starting
		// word upto last word in arr.
		for (j = i; j < n; j++) {

			// Update number of characters
			// in current line. arr[j] is
			// number of characters in
			// current word and 1
			// represents space character
			// between two words.
			currlen += (arr[j] + 1);

			// If limit of characters
			// is violated then no more
			// words can be added to
			// current line.
			if (currlen > k)
				break;

			// If current word that is
			// added to line is last
			// word of arr then current
			// line is last line. Cost of
			// last line is 0. Else cost
			// is square of extra spaces
			// plus cost of putting line
			// breaks in rest of words
			// from j+1 to n-1.
			if (j == n - 1)
				cost = 0;
			else
				cost = (k - currlen) * (k - currlen) + dp[j + 1];

			// Check if this arrangement gives
			// minimum cost for line starting
			// with word arr[i].
			if (cost < dp[i]) {
				dp[i] = cost;
				ans[i] = j;
			}
		}
	}

	// Print starting index and ending index
	// of words present in each line.
cout<<dp[0];
}

// Driver function


signed main(){
    fast;
    int k;
    int t = 1;
    cin >> k;
    int i;
    vector<int>v;
    while(cin>>i){
        v.push_back(i);

    }
    while(t--){
    	solveWord(v,k);
    }
    return 0;
}
