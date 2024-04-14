#include<bits/stdc++.h>
using namespace std;
int main()
{int t;
cin>>t;
while(t--){
int n;
char d;
string z;
cin>>n>>d>>z;
int i=0;
while(i<n && z[i]>=d)
i++;
z.insert(i,1,d);
cout<<z<<endl;
}
return 0;
}
