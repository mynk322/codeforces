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
    ll n,k,t;
    cin>>n;
    ll a[n];
    for (int i = 0; i < n; ++i)
    {
    	cin>>a[i];
    }
    ll b[5],c[5]={0};
    for (int i = 0; i < 5; ++i)
    {
    	cin>>b[i];
    }
    reverse(b, b+5);
    ll s=0;
    for (int i = 0; i < n; ++i)
    {
    	s=s+a[i];
    	for (int j = 0; j < 5; ++j)
    	{
    		if(b[j]<=s)
    		{
    			c[j]+=s/b[j];
    			s=s%b[j];
    		}
    	}
    }
    reverse(c,c+5);
    for (int i = 0; i < 5; ++i)
    {
    	cout<<c[i]<<" ";
    }
    cout<<endl;
    cout<<s<<endl;
    return 0;
}