#include<bits/stdc++.h>
using namespace std;

int main()
{
     double n,p;
     cin>>n;
     p=n-int(n);
     if(p>=0.5) cout<<int(n)+1;
     else cout<<int(n);
}
