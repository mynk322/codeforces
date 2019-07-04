//CODE WRITTEN BY MAYANK PADIA
#include <bits/stdc++.h>
using namespace std;
#define f(a,b) for(ll i=a; i<b; i++)
#define fr(a,b) for(ll j=a; j>=b; j--)
#define fj(a,b) for(ll j=a; j<b; j++)
#define fk(a,b) for(ll k=a; k<b; k++)
typedef long long ll;
typedef long double ld;
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
int main()
{
    ll t,n,m;
    cin>>n>>m;
    ll a[n],b[m];
    for(ll i=0; i<n;i++)
    {
        cin>>a[i];
    }
    for(ll i=0; i<m;i++)
    {
        cin>>b[i];
    }
    ll c=0;
    ll s=a[0];
    ll s1=b[0];
    ll i=0,j=0;
    for(;i<n&&j<m;)
    {
        if(s==s1)
        {
            s=a[++i];s1=b[++j];
            c++;
            continue;
        }
        if(s>s1)
        {
            s1+=b[++j];
            continue;
        }
        if(s<s1)
        {
            s+=a[++i];
            continue;
        }
    }
    if(i!=n||j!=m)
    c++;
    cout<<c;
    return 0;
}