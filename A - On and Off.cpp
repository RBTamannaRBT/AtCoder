#include<bits/stdc++.h>
using namespace std;

int main()
{
     int a,b,c;
     cin>>a>>b>>c;
     if(c>=a && c<b) cout<<"Yes";
     else if(a>b && (c<b || c>=a) ) cout<<"Yes";
     else cout<<"No";
}
