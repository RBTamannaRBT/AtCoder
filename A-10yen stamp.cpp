#include<bits/stdc++.h>
using namespace std;
int fun(int n)
{
 return n*n+2*n+3;
}
int main()
{
    int a,b;
    cin>>a>>b;
    float c=b-a;
    c/=10;
    if(a>=b) cout<<0;
    else if(c>int(c)) cout<<int(c)+1;
    else cout<<int(c);
}
