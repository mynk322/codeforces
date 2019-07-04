#include <bits/stdc++.h>
using namespace std;
int main() {
    long long int t,z,n,x=0,i,j,m,k;
    long long int n1=0,n2,n4,n3,n5;
    cin>>n>>m;
    int a[35];
    while(m>0)
    {
        j=m%2;
        a[x++]=j;
        m=m/2;
    }

    for(i=0;i<x;i++)
    {
        if(i>=n)
            break;
        if(a[i]==1)
        n1=n1+pow(2,i);
    }
    cout<<n1;
    return 0;
}