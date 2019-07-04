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
int main(){
        #ifndef ONLINE_JUDGE
            freopen("input.txt","r",stdin);
            freopen("output.txt","w",stdout);
        #endif
    ios::sync_with_stdio(0); cin.tie(0);
    ll n,t;
    cin>>n;
    ll a[n];
    for (int i = 0; i < n; ++i)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    ll b[n];
    b[0]=a[0];
    for (int i = 1; i < n; ++i)
    {
        b[i]=b[i-1]+a[i];
    }
    ll ans=2;
    if(n==1)
    {
        cout<<1;
        return 0;
    }
    if(n==2)
    {
        cout<<2;
        return 0;
    }
    ll x=a[0]+a[1];
    for (int i = 2; i < n; ++i)
    {
        /* code */
        if(x<=a[i])
        {
            ans++;
            x+=a[i];
        }
        else if(x>a[n-1])
        {
            break;
        }
        else
        {
            ll z=ll(lower_bound(a,a+n,x)-a);
            ans++;
            x+=a[z];
        }
    }
    cout<<ans;
    #ifndef ONLINE_JUDGE
        cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif
return 0;
}