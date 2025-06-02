/* PAPPU*/
#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;
 
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define MOD 1000000007
#define MOD1 998244353
#define INF 1e18
#define nline "\n"
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
#define PIE 3.141592653589793238462
#define set_bits __builtin_popcountll
#define sz(x) ((int)(x).size()) 
#define all(x) (x).begin(), (x).end()
#define jada INT_MAX











int main() {
   int t;
   cin>>t;
   while(t--){
   	int n,r,rem=0,answer=0; cin>>n>>r;
   	for(int i=0;i<n;i++){
   		int x;
   		cin>>x;
   		r-=x/2;
   		answer+=(x/2)*2;
   		rem+=(x%2);
   	}
   	cout<<answer+min(rem,2*r-rem)<<endl;
   }
   return 0;
}



