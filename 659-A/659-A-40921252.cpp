#include <bits/stdc++.h>
using namespace std;
int main() {
    long long int a,b,c;
    cin>>a>>b>>c;
    if((a+b+(c)%a)%a!=0)
    cout<<(a+b+(c)%a)%a;
    else
        cout<<a;
    return 0;
}