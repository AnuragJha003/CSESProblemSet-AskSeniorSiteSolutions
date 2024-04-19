#include <bits/stdc++.h>
using namespace std;
int t;
int a;
int main(){
	cin>>t;
	while(t--){
		int b=0,c=0;
		int n;
		cin>>n;
		for(int i=1;i<=n;i++){
			cin>>a;
			if(a%2==0)	b+=a;
			else	c+=a;
		}
		if(b>c)	cout<<"YES\n";
		else	cout<<"NO\n";
	}
	return 0;
}
 				 			 	   					 	     		