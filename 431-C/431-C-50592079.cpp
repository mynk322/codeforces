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
    ll k,d;
    cin>>n>>k>>d;
    ll a[n+1][2]={{0}};
    a[0][0]=1;
    a[0][1]=0;
    for (int i =1; i <=n; ++i)
    {
    	/* code */
    	for (int j = 1; j <=k; ++j)
    	{
    		/* code */
    		if(i-j<0)
    			break;
    		if(j<d)
    		{
    			a[i][0]+=a[i-j][0];
    			a[i][1]+=a[i-j][1];
    			a[i][0]%=MAX;
    			a[i][1]%=MAX;
    		}
    		else
    		{
    			a[i][1]+=a[i-j][0]+a[i-j][1];
    			a[i][1]%=MAX;
    		}
    	}
    }
    cout<<a[n][1];

    #ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif
return 0;
}