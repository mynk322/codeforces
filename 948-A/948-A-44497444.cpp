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
    ll r,c;
    cin>>r>>c;
    char a[r][c];
    for(ll i=0; i<r;i++)
    {
        for(ll j=0; j<c;j++)
        {
           cin>>a[i][j]; 
        }
    }
    ll c1=0;
    for(ll i=0; i<r;i++)
    {
        for(ll j=0; j<c;j++)
        {
            if(a[i][j]=='W')
            {
             if(i!=0&&a[i-1][j]=='S')
                c1=1;
            if(i!=r-1&&a[i+1][j]=='S')
                c1=1;
             if(j!=0&&a[i][j-1]=='S')
                c1=1;
            if(j!=c-1&&a[i][j+1]=='S')
                c1=1;
            }
        }
    }
    if(c1==0)
    {cout<<"Yes\n";
    for(ll i=0; i<r;i++)
    {
        for(ll j=0; j<c;j++)
        {
            if(a[i][j]=='.')
            cout<<"D";
            else
            cout<<a[i][j];
        }
        cout<<endl;
    }}
    else
    cout<<"No";
    return 0;
}