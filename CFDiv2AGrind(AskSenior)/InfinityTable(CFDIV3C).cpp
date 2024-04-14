#include <iostream>
#include<cmath>
using namespace std;

int main()
{ 
int t;
cin>>t;
while(t--){
long long k;
cin>>k;
long long p;
p=sqrt(k);
if(p*p==k)cout<<p<<" "<<1<<endl;
else if(k<=p*p+p+1)cout<<k-p*p<<" "<<p+1<<endl;
    else cout<<p+1<<" "<<(p+1)*(p+1)-k+1<<endl;
}
    return 0;
}
