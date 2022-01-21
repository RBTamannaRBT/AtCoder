#include<bits/stdc++.h>
using namespace std;

int main()
{
     int a,b,c;
     cin>>a>>b>>c;
     int n=b/c;
     n=n*c;
     if(n>=a) cout<<n;
     else cout<<-1;

}
