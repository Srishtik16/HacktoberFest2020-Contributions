#include<bits/stdc++.h>
using namespace std;
int main()
{
  int a,b;
  cin>>a>>b;
  int mod;
  cin>>mod;
  cout<<(a%mod * b%mod)%mod<<endl;
  return 0;
 }
