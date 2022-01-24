#include<bits/stdc++.h>
using namespace std;

int main()
{
     string s,ss;
     int a,b;
     cin>>s>>a>>b;
     ss=s;
     ss[a-1]=s[b-1];
     ss[b-1]=s[a-1];

     cout<<ss;
}
