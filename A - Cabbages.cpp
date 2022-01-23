#include<bits/stdc++.h>
using namespace std;

int main()
{
     int n,a,x,y;
     cin>>n>>a>>x>>y;
     if(n<=a) cout<<n*x;
     else cout<<x*a+(n-a)*y;

}
