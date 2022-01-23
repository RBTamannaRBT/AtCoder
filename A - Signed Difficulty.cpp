#include<bits/stdc++.h>
using namespace std;

int main()
{
     double a,b;
     cin>>a;
     b=a-int(a);
     if(b<=0.2) cout<<int(a)<<"-";
     else if(b<0.7) cout<<int(a);
     else cout<<int(a)<<'+';
}
