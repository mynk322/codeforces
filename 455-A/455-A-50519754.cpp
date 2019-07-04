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
map<ll,ll> a;
ll d[100100];
ll dp( ll i)
{
    if(i==-1)
    return 0;
    if(i==0||i==1)
        {d[i]=0;return a[i]*i;}
    if(d[i]!=-1)
        return d[i];
   d[i]=max(dp(i-1),dp(i-2)+a[i]*i);
    return d[i];
}
int main(){
        #ifndef ONLINE_JUDGE
            freopen("input.txt","r",stdin);
            freopen("output.txt","w",stdout);
        #endif
    ios::sync_with_stdio(0); cin.tie(0);
    ll n,t;
    cin>>n;
    ll s=0;
    for (int i = 0; i < n; ++i)
    {
        cin>>t;
        a[t]++;
        if(i==0)
            s=t;
    }
    for (int i = 0; i <=100099; ++i)
    {
        d[i]=-1;
    }
    ll x=dp(100001);
    x=d[100000];
    cout<<x;
    #ifndef ONLINE_JUDGE
        cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif
return 0;
}