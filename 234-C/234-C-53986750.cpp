#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define f(a,b) for(ll i=a; i<b; i++)
#define mod 1000000007
#define mp make_pair
#define pb push_back
#define vll vector<ll>
#define pll vector<pair<ll,ll>>
#define ld long double
#define fr(a,b) for(ll j=a; j>=b; j--)
#define fi(a,b) for(ll j=a; j<b; j++)
#define fii(a,b) for(ll k=a; k<b; k++)

int main()
{
      freopen("input.txt", "rt", stdin);
   	 freopen("output.txt", "wt", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(0);

    ll n;
    cin>>n;
    ll a[n], b[n]={0}, c[n]={0};
    f(0, n) cin>>a[i];
    if(a[0]<0)  b[0]=1;     else b[0]=0;
    f(1, n)
    {
        if(a[i]<0)
            b[i] = b[i-1]+1;
        else b[i]=b[i-1];
    }
    fr(n-2, 0)
    {
        if(a[j+1]<=0)
            c[j] = c[j+1]+1;
        else c[j]=c[j+1];
    }
    ll ans=1e18;
    f(0, n-1)
    {
        ll x = i+1-b[i]+c[i];
        ans = min(ans, x);
    }
    cout<<ans;

     #ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif
}