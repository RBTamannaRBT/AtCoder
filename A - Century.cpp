#include<bits/stdc++.h>
using namespace std;

int main()
{
     int a,b,c;
     cin>>a>>b>>c;
     if(c-b==b-a || c-a==a-b || a-c==c-b ) cout<<"Yes";
     else cout<<"No";
}
