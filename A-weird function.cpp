#include<bits/stdc++.h>
using namespace std;
int fun(int n)
{
 return n*n+2*n+3;
}
int main()
{
    int n;
    cin>>n;
    cout<<fun(fun(fun(n)+n)+fun(fun(n)))<<'\n';
}
