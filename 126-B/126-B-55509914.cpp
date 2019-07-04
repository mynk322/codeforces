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
ll power(ll a, ll b, ll m) {
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
ll modinv(ll a , ll aa){
	ll x , y;
	extended_GCD(a , aa , x , y);
	if(x < 0) x += aa;
	return x;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



vll siz,has;
    string s;
	ll n;
const ll m=1000000009,p=31;

ll fun(ll si,ll ha)
{
	if(si>n-2)
		return -1;
	ll xx=0;
	ll p_pow=1;
	for (int i = 1; i < 1+si; ++i)
	{
    		xx = (xx + ((s[i] - 'a' + 1) * p_pow) % m) % m;
			p_pow = (p_pow * p) % m;
	}
	p_pow=1;
	for (int i = 0; i < si-1; ++i)
	{
			p_pow = (p_pow * p) % m;
	}
	if(xx==ha)
		return 1;
	ll ab=power(p,m-2,m);
	for (int i = 2; i < n-si-1; ++i)
	{
		xx-=(s[i-1]-'a'+1);
		if(xx<0)
			{xx+=m;}
		xx%=m;
		xx*=ab;
		xx%=m;
  	 	xx = (xx + ((s[i+si-1] - 'a' + 1) * p_pow) % m) % m;
    	if(xx==ha)
    		return 1;
	}
	return -1;
}

void solve(){
    cin>>s;
    n=s.length();
    string s1="";
    ll x=0;
    ll pre=0,suf=0;
    ll p_pow=1;
    for (int i = 0; i < n-1; ++i)
    {
			suf =  (((suf * p) % m) + (s[n-i-1] - 'a' + 1)) % m;
    		pre = (pre + ((s[i] - 'a' + 1) * p_pow) % m) % m;
			p_pow = (p_pow * p) % m;
			if(pre == suf){
    		siz.pb(i+1);
    		has.pb(pre);
    		x=i+1;}
    }
	if(x==0)
	{
		cout<<"Just a legend";
		return ;
	}
	ll h=siz.size()-1,l=0,mid,ans=-1;
	while(h>=l)
	{
		mid=(h+l)/2;
		ll c=fun(siz[mid],has[mid]);
		if(c==1)
		{
			ans=max(ans,siz[mid]);
		}
		if(c==1)
			l=mid+1;
		else
			h=mid-1;
	}
	if(ans==-1)
	{
		cout<<"Just a legend";
		return ;
	}
	string ds=s.substr(0,ans);
	cout<<ds;
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