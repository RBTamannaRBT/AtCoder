#include<bits/stdc++.h>
using namespace std;

int main()
{
     int a,b;
     cin>>a>>b;
     if(a<b && a+3>b) cout<<"Yes";
     else if(b<a && b+3>a) cout<<"Yes";
     else cout<<"No";
}
