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
    cin>>n;
    ll a[n];
    ll s=0;
    for (int i = 0; i < n; ++i)
    {
        cin>>a[i];
        s+=a[i];
    }
    if(s%3)
    {
        cout<<0;
        return 0;
    }
    ll b[n];
    b[0]=a[0];
    vll v,v1;
    if(b[0]==s/3)
        v.pb(0);
    for (int i = 1; i < n-1; ++i)
    {
        /* code */
        b[i]=b[i-1]+a[i];
        if(b[i]==s/3)
            v.pb(i);
        if(b[i]==(2*s)/3)
            v1.pb(i);
    }
    ll ans=0;
    for (int i = 0; i < v.size(); ++i)
    {
        ans+=v1.size()-ll(upper_bound(v1.begin(),v1.end(),v[i])-v1.begin());
    }
    cout<<ans;
    #ifndef ONLINE_JUDGE
        cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif
return 0;
}