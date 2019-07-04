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
    cin>>n;
    ll k1,k2;
    cin>>k1;
    ll a1[k1];
    queue<ll> q1,q2;
    for(ll i=0; i<k1;i++)
    {
        cin>>a1[i];
        q1.push(a1[i]);
    }
    cin>>k2;
    ll a2[k2];
    for(ll i=0; i<k2;i++)
    {
        cin>>a2[i];
        q2.push(a2[i]);
    }
    ll c=0;
    ll x1,x2;
    while(1)
    {
    x1=q1.front();
    x2=q2.front();
    q1.pop();
    q2.pop();
    if(x1>x2)
    {
        q1.push(x2);
        q1.push(x1);
    }
    else
    {
        q2.push(x1);
        q2.push(x2);
    }
    c++;
    if(q1.size()==0)
    {
        cout<<c<<" "<<2;
        return 0;
    }
    if(q2.size()==0)
    {
        cout<<c<<" "<<1;
        return 0;
    }
    if(c>100000)
    break;
    }
    cout<<-1;
    return 0;
}