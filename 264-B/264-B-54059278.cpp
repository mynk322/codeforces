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
    ll a[n];
    for (int i = 0; i < n; ++i)
    {
    	cin>>a[i];
    }
    ll dp[n]={0};
    dp[0]=1;
    map<ll,ll> m;
    m[a[0]]=1;
    	set<ll> s11;
    	for (int j = 2; j*j<=a[0]; ++j)
    	{
    		if(a[0]%j==0)
    		{
    			s11.insert(j);
    			s11.insert(a[0]/j);
    		}
    	}
    	for(auto it : s11)
    	{
    		m[it]++;
    	}
    for (int i = 1; i < n; ++i)
    {
    	set<ll> s;
    	for (int j = 2; j*j<=a[i]; ++j)
    	{
    		if(a[i]%j==0)
    		{
    			s.insert(j);
    			s.insert(a[i]/j);
    		}
    	}
    	ll an=1;
    	for(auto it : s)
    	{
    		m[it]++;
    		an=max(an,m[it]);
    	}
    	m[a[i]]=an;
    	for(auto it : s)
    	{
    		m[it]=an;    	}
    	dp[i]=an;
    }
    ll ans=0;
    for (int i = 0; i < n; ++i)
    {
    	ans=max(ans,dp[i]);
    }
	cout<<ans;
	
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