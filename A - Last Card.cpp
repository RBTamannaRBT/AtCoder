#include<bits/stdc++.h>
using namespace std;

int main()
{
     int a,b,c;
     cin>>a>>b>>c;
     int ans=((c+b-1)%a)==0? a:((c+b-1)%a);
     cout<<ans;
}
