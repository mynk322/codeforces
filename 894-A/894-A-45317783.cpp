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
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cin.tie(0);
    ll t,n;
    string s;
    cin>>s;
    ll x=s.length();
    ll v[x]={0},v1[x]={0};
    if(s[0]=='Q')
    v[0]=1;
    else
    v[0]=0;
    for(ll i=1; i<x;i++)
    {
        v[i]=v[i-1];
        if(s[i]=='Q')
        v[i]++;
        if(s[i]=='A')
        v1[i]=1;
    }
    ll s1=0;
    for(ll i=0; i<x;i++)
    {
        if(v1[i]==1)
        {s1+=v[i]*(v[x-1]-v[i]);}
    }
    cout<<s1;
    return 0;
}