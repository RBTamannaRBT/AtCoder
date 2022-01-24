#include<bits/stdc++.h>
using namespace std;

int main()
{
     int a,b,c;
     cin>>a>>b>>c;
     if(a<b) cout<<"Aoki";
     else if(b<a) cout<<"Takahashi";
     else if(c==0) cout<<"Aoki";
        else cout<<"Takahashi";
}
