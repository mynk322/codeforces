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
#define all(x) x.begin(),x.end()
#define I insert
#define vll vector<ll>
#define vllp vector<pair<ll,ll> >
#define mp make_pair
ll power(ll a, ll b, ll mod){ ll c = 1; while(b>0){ if(b%2) c*=a, c%=mod; b/=2; a*=a; a%=mod; } return c; }
#define MAX 1000000007
int main(){
		#ifndef ONLINE_JUDGE
			freopen("input.txt","r",stdin);
	    	freopen("output.txt","w",stdout);
	    #endif
    ios::sync_with_stdio(0); cin.tie(0);
    ll n,t;
    string s;
    cin>>s;
	string a[1000005];
    n=s.length();
    t=0;
    for (int i = 0; i < n; ++i)
    {
    	t=max(ll(s[i]-'0'),t);
    	for (int j=0;j<ll(s[i]-'0');j++)
		{
			a[j]+='1';
		}
		for (int j=ll(s[i]-'0');j<t;j++)
		a[j]+='0';
    }
    cout<<t<<endl; 
    for (int i=0;i<t;i++)
	cout<<a[i]<<" ";




    #ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif
return 0;
}