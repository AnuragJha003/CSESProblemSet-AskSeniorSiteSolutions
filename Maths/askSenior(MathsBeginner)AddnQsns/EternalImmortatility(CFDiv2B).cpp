#include <iostream>
using namespace std;
 
int main() {
	long long a,b,i,s=1;
	cin>>a>>b;
	for(i=a+1;i<=b && s;i++)
		s=s*i%10;
	cout<<s;
	return 0;
}
//5!@/2!
//5*4*3