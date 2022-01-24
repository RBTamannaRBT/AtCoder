#include<bits/stdc++.h>
using namespace std;

int main()
{
     double n;
     cin>>n;
     n/=100;
     if(n>int(n)) cout<<int(n)+1;
     else cout<<int(n);
}
