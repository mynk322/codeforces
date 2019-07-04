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
    string s,s1;
    cin>>s;
    n=0;t=0;
    s1=s;
    for(ll i=0; i<s.length()-1;i++)
    {
        if(s[i]=='A'&&s[i+1]=='B')
        {
            s[i]='Z';
            s[i+1]='Z';
            n=1;
            break;
        }
    }
    for(ll i=0; i<s.length()-1;i++)
    {
        if(s[i]=='B'&&s[i+1]=='A')
        {
            s[i]='Z';
            s[i+1]='Z';
            t=1;
            break;
        }
    }
    if(t&&n)
    cout<<"YES";
    else{
        t=0;n=0;
    for(ll i=0; i<s1.length()-1;i++)
    {
        if(s1[i]=='B'&&s1[i+1]=='A')
        {
            s1[i]='Z';
            s1[i+1]='Z';
            t=1;
            break;
        }
    }
    for(ll i=0; i<s1.length()-1;i++)
    {
        if(s1[i]=='A'&&s1[i+1]=='B')
        {
            s[i]='Z';
            s[i+1]='Z';
            n=1;
            break;
        }
    }
    if(t&&n)
    cout<<"YES";
    else
    cout<<"NO";
    }
    return 0;
}