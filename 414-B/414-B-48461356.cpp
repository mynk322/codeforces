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
ll dp[2001][2001];
int main()
{
	ios_base::sync_with_stdio(false);
		#ifndef ONLINE_JUDGE
			freopen("input.txt","r",stdin);
	    	freopen("output.txt","w",stdout);
	    #endif
	int n, k;
	cin >> n >> k;
	for(int i = 1; i <= n; i++)
	{
		dp[1][i] = 1;
	}
	for(int i = 2; i <= k; i++)
	{
		for(int j = 1; j <= n; j++)
		{
			for(int z = j; z <= n; z += j)
			{
				dp[i][z] += dp[i-1][j];
				dp[i][z] %= MAX;
			}
		}
	}
	ll ans = 0;
	for(int i = 1; i <= n; i++)
	{
		ans = (ans + dp[k][i])%MAX;
	}
	if(ans < 0) ans += MAX;
	cout << ans;
	return 0;
}