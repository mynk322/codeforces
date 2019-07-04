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
long long int dp1[1001][1001] = {0};
long long int dp2[1001][1001] = {0};
long long int dp3[1001][1001] = {0};
long long int dp4[1001][1001] = {0};
void solve(){
	ll n;
	ll m;
    cin>>n>>m;
	ll a[n+1][m+1];
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			cin>>a[i+1][j+1];
		}
	}
    for (int i = 1; i <= n; ++i)
        for (int j = 1; j <= m; ++j)
            dp1[i][j] = a[i][j] + max(dp1[i - 1][j], dp1[i][j - 1]);
    for (int j = m; j >= 1; --j)
        for (int i = 1; i <= n; ++i)
            dp2[i][j] = a[i][j] + max(dp2[i - 1][j], dp2[i][j + 1]);
    for (int i = n; i >= 1; --i)
        for (int j = 1; j <= m; ++j)
            dp3[i][j] = a[i][j] + max(dp3[i + 1][j], dp3[i][j - 1]);
    for (int i = n; i >= 1; --i)
        for (int j = m; j >= 1; --j)
            dp4[i][j] = a[i][j] + max(dp4[i][j + 1], dp4[i + 1][j]);
	ll ans = 0, result = 0;
    for (int i = 2; i <=n - 1; i++)
    {
        for (int j = 2; j <= m - 1; j++)
        {
          ans = max(dp1[i - 1][j] + dp4[i + 1][j] + dp3[i][j - 1] + dp2[i][j + 1], dp1[i][j - 1] + dp4[i][j + 1] + dp3[i + 1][j] + dp2[i - 1][j]);
          result = max(result, ans);
        }
    }
    cout << result << "\n";    
	
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