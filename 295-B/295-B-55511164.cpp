/**
*        __    _____ _____ ____  _____ _____ _____			
*       |  |  |     |  _  |    \|     |   | |   __|				
*       |  |__|  |  |     |  |  |-   -| | | |  |  |_ _ _		
*       |_____|_____|__|__|____/|_____|_|___|_____|_|_|_|		
**/
#include<bits/stdc++.h>
typedef long long ll;
typedef double ld;
#define vll vector<ll>
#define vvll vector< vll >
#define vld vector< ld >
#define vvld vector< vld >
#define pll pair<ll ,ll >
#define vllp vector< pll >
#define mp make_pair
#define pb push_back
#define MOD 1000000007
#define endl "\n"
#define test ll t;cin>>t;while(t--)
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define F first
#define S second

#define forn(i,n) for(ll (i) = 0 ; (i) < (n) ; ++(i))
#define for1(i,n) for(ll (i) = 1 ; (i) <= (n) ; ++(i))
#define forr(i,n) for(ll (i) = (n)-1 ; (i)>=0 ; --(i))
#define forab(i,a,b,c) for(ll (i) = a ; (i) <= (b) ; (i)+=(c))
#define MAX 1000000007
using namespace std;

vll sieve;
void Sieve(int N){
	const ll maxn = N;
	sieve.resize(maxn);
	forn(i,maxn) sieve[i] = i;
	sieve[1] = -1;
	sieve[0] = -1;
	forab(i,2,maxn,1) if(i == sieve[i]) for(ll j = 2*i ; j < maxn ; j+=i) if(sieve[j] == j) sieve[j] = i;
}
ll extended_GCD(ll a , ll b , ll &x , ll &y){
	if(a == 0){
		x = 0;
		y = 1;
		return b;
	}
	ll x1 , y1;
	ll gcd = extended_GCD(b%a , a , x1 , y1);
	x = y1 - (b/a)*x1; 
	y = x1;
	return gcd;
}
ll power(ll a, ll b, ll m = MOD) {
    a %= m;
    ll res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a % m;
        a = a * a % m;
        b >>= 1;
    }
    return res;
}
ll modinv(ll a , ll mod = MOD){
	ll x , y;
	extended_GCD(a , mod , x , y);
	if(x < 0) x += mod;
	return x;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void solve(){
	ll n;
    cin>>n;
    ll a[n][n];
    for (int i = 0; i < n; ++i)
    {
    	for (int j = 0; j < n; ++j)
    	{
    		cin>>a[i][j];
    	}
    }
    ll b[n];
    for (int i = 0; i < n; ++i)
    {
    	cin>>b[i];
    	b[i]--;
    }
	ll floyd[n][n];
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			floyd[i][j]=MAX;
		}
	}
	ll v[n]={0},ans[n]={0};
	reverse(b,b+n);
	for (int i = 0; i < n; ++i)
	{
		ll x=b[i];
		for (int j = 0; j < n; ++j)
		{
			for (int k = 0; k < n; ++k)
			{
				a[j][k]=min(a[j][k],a[j][x]+a[x][k]);
			}
		}
		ll an=0;
		for (int j = 0; j <=i; ++j)
		{
			for (int k = 0; k <=i; ++k)
			{
				an+=a[b[j]][b[k]];
			}
		}
		ans[i]=an;
	}
	reverse(ans,ans+n);
	for (int i = 0; i < n; ++i)
	{
		cout<<ans[i]<<" ";
	}
	
	}
int main(){
		#ifndef ONLINE_JUDGE
			freopen("input.txt","r",stdin);
	    	freopen("output.txt","w",stdout);
	    #endif
    ios::sync_with_stdio(0); cin.tie(0);
	int t=1;
    // cin>>t;
    while(t--){
        solve();
    }
    #ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif
return 0;
}