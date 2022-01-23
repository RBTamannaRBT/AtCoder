#include<bits/stdc++.h>
using namespace std;

int main()
{
     int n,m,a;
     cin>>n>>m;
     a=n+m;
     if(a==n) cout<<"Gold";
     else if(a==m) cout<<"Silver";
     else cout<<"Alloy";
}
