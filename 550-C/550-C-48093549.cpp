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
    n=s.length();
    for(ll i=0; i<n;i++)
    {
        if(ll(s[i]-'0')%2==0)
        {
            if(s[i]=='8')
            {
                cout<<"YES\n8";
                return 0;
            }
            if(s[i]=='0')
            {
                cout<<"YES\n0";
                return 0;
            }
        }
    }


    for(ll i=0; i<n-1;i++)
    {
            for(ll k=i+1; k<n;k++)
            {
                if((s[i]=='1'&&s[k]=='6')||(s[i]=='2'&&s[k]=='4')||(s[i]=='3'&&s[k]=='2')||(s[i]=='4'&&s[k]=='0')||(s[i]=='5'&&s[k]=='6')||(s[i]=='6'&&s[k]=='4')||(s[i]=='7'&&s[k]=='2')||(s[i]=='9'&&s[k]=='6')||(s[i]=='9'&&s[k]=='6'))
                {
                    cout<<"YES\n"<<s[i]<<s[k];
                return 0;
                }

            }
    }

    for(ll i=0; i<n-2;i++)
    {
        if(ll(s[i]-'0')%2!=0)
        {
            for(ll k=i+1; k<n-1;k++)
            {
                for(ll z=k+1; z<n;z++)
                {
                if((s[k]=='1'&&s[z]=='2')||(s[k]=='3'&&s[z]=='6')||(s[k]=='4'&&s[z]=='4')||(s[k]=='5'&&s[z]=='2')||(s[k]=='7'&&s[z]=='6')||(s[k]=='9'&&s[z]=='2'))
                {
                    cout<<"YES\n"<<s[i]<<s[k]<<s[z];
                return 0;
                }
                }
            }
        }
    }
    cout<<"NO\n";
    return 0;
}