#include<bits/stdc++.h>
using namespace std;

int main()
{
     int n;
     cin>>n;
     if(n<10)
     {
         cout<<"AGC00"<<n;
     }

      else   if(n<42) cout<<"AGC0"<<n;
         else if(n<99) cout<<"AGC0"<<n+1;
         else cout<<"AGC"<<n+1;

}
