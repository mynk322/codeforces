/*CODE WRITTEN BY MAYANK PADIA*/
#include <bits/stdc++.h>
using namespace std;
#define fri(a,b) for(ll i=a; i<b; i++)
#define frrj(a,b) for(ll j=a; j>=b; j--)
#define frj(a,b) for(ll j=a; j<b; j++)
#define frk(a,b) for(ll k=a; k<b; k++)
#define frz(a,b) for(ll z=a; z<b; z++)
typedef long long ll;
typedef double ld;
#define pll pair<ll,ll>
#define pb push_back
#define F first
#define S second
#define I insert
#define vll vector<ll>
#define vllp vector<pair<ll,ll> >
#define mp make_pair
ll gcd(ll a, ll b){    return b!=0 ? a : gcd(b, a % b);}
ll power(ll a, ll b, ll mod){ ll c = 1; while(b>0){ if(b%2) c*=a, c%=mod; b/=2; a*=a; a%=mod; } return c; }
#define mod 100000000 
int main(){
		#ifndef ONLINE_JUDGE
			freopen("input.txt","r",stdin);
	    	freopen("output.txt","w",stdout);
	    #endif
    ios::sync_with_stdio(0); cin.tie(0);
    ll n,t;
    ll n1,n2,k1,k2;
	ll dp[201][201][2];
	cin>>n1>>n2>>k1>>k2;
  	dp[0][0][0]=dp[0][0][1]=1;
  	for(int i = 0; i <= n1; ++i){
    for(int j = 0; j <= n2; ++j){
      for(int k = 1; k <= k1; ++k) dp[i+k][j][0]=(dp[i+k][j][0]+dp[i][j][1])%mod;
      for(int k = 1; k <= k2; ++k) dp[i][j+k][1]=(dp[i][j+k][1]+dp[i][j][0])%mod;
    	}
  	}
  	cout<<(dp[n1][n2][0]+dp[n1][n2][1])%mod<<endl;

    #ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif
return 0;
}