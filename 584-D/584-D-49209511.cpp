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
#define MAX 1000000007
bool isprime(ll n)
{
	if(n==1||n==0)
		return false;

	for (int i = 2; i*i <=n; ++i)
	{
		/* code */
		if(n%i==0)
			return false;
	}
	return true;
}
int main(){
		#ifndef ONLINE_JUDGE
			freopen("input.txt","r",stdin);
	    	freopen("output.txt","w",stdout);
	    #endif
    ios::sync_with_stdio(0); cin.tie(0);
    ll n,t;
    cin>>n;
    if(n==3)
    {
    	cout<<1<<"\n"<<3;
    	return 0;
    }
    if(isprime(n))
    {
    	cout<<"1\n"<<n;
    	return 0;
    }
    for (int i = 2; i < 300; ++i)
    {
    	if(isprime(n-i))
    	{
    		t=i;
    		break;
    	}
    }
    if(t==2||t==3)
    {
    	cout<<2<<endl; 
    	cout<<t<<" "<<n-t;
    }
    else
    {
    	for (int i = 2; i < t; ++i)
    	{
    			if(isprime(i)&&isprime(t-i))
    			{
    				cout<<3<<"\n"<<n-t<<" "<<i<<" "<<t-i;
    				break;
    			}
    	}
    }
    #ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif
return 0;
}