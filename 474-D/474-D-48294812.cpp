//CODE WRITTEN BY MAYANK PADIA
#include <bits/stdc++.h>
using namespace std;
#define f(a,b) for(ll i=a; i<b; i++)
#define fr(a,b) for(ll j=a; j>=b; j--)
#define fj(a,b) for(ll j=a; j<b; j++)
#define fk(a,b) for(ll k=a; k<b; k++)
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
ld fun(ld x)
{
    ld s=x*x*x-5*x+1;
    return s;
}

int main(){
    //freopen("input.txt","r", stdin);
    //freopen("output.txt","w", stdout);
    ll n,k,t;
    cin>>n;
    cin>>k;
    ll a[100004];
    a[0]=0;
    for (int i = 1; i < 100004; ++i)
    {
    	if(i<k)
    	a[i]=1;
    	else
    		a[i]=a[i-1]+a[max(i-k,0ll)];
    	if(i==k)
    		a[i]=2;
    	a[i]%=1000000007;
    }
    for (int i = 2; i < 100004; ++i)
    {
    	a[i]=a[i-1]+a[i];
    }
    while(n--)
    {
    	ll x,y;
    	cin>>x>>y;
    	cout<<(a[y]-a[x-1])%1000000007<<endl;
    }
    return 0;
}