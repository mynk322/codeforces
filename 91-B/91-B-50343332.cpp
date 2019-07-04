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
    ll a1[n],ac[n],rel[n],s[n];
    pair<ll,ll> a[n];
    for (int i = 0; i < n; ++i)
    {
        cin>>a1[i];
        s[i]=a1[i];
        a[i]={a1[i],i};
    }
    sort(a,a+n);
    sort(s,s+n);
    ac[0]=a[0].S;
    rel[0]=ac[0];
    for (int i = 1; i < n; ++i)
    {
        ac[i]=a[i].S;
        rel[i]=max(ac[i],rel[i-1]);
    }
    ll ans[n]={0};
    map <ll,ll> ma;
    for (int i = 0; i < n; ++i)
    {
        ll pos=ll(lower_bound(s,s+n,a1[i])-s);
        if(ma[s[pos]])
        {
            pos+=ma[s[pos]];
            ma[s[pos]]++;
        }
        if(ma[s[pos]]==0)
            ma[s[pos]]=1;
        if(ac[pos]>=rel[pos])
            ans[i]=-1;
        else
            ans[i]=abs(ac[pos]-rel[pos])-1;
    }
    for (int i = 0; i < n; ++i)
    {
        cout<<ans[i]<<" ";
    }
    #ifndef ONLINE_JUDGE
        cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif
return 0;
}