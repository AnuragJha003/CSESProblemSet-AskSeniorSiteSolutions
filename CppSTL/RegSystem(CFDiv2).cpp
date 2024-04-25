#include <bits/stdc++.h>
using namespace std;
string s;
main()
{
map<string,int>a;
int n;cin>>n;
while(cin>>s)
{
if(a[s])
cout<<s<<a[s]<<endl;
else  cout<<"OK"<<endl;
a[s]++;
}}