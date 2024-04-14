#import<iostream>
using namespace std;
main()
{
int t,k;
cin>>t;
while(t--)
{
string ki="314159265358979323846264338327",r;
cin>>r;
int qs=0;
for(k=0;k<r.size()&&r[k]==ki[k];k++)
qs++;
cout<<qs<<endl;
}
}