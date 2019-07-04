//CODE WRITTEN BY MAYANK PADIA
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
#define MAX 1000000007
	ll a[3030],b[3030][3030];
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll n,t;
    ll m;
    cin>>n>>m;
	vll a[3030];ll b[3030][3030]={0};
	for (int i = 0; i < m; ++i)
	{
		ll c,d;
		cin>>c>>d;
		c--;
		d--;
		a[c].pb(d);
	}	
	ll ans=0;
	for (int i=0;i<n;i++) for (auto j:a[i]) for (auto k:a[j]) if(i!=k) b[i][k]++;
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < 3030; ++j)
		{
			if(b[i][j]!=0)
			ans+=(b[i][j]*(b[i][j]-1))/2;
		}
	}
	cout<<ans<<endl;
return 0;
}