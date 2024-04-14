#include <bits/stdc++.h>
using namespace std;
int main(){
    int t,n,res;
	cin>>t;
	while(t--){
		cin>>n;
		res=0;
		for(int i=1;i<=n;i++){
			int x;
			cin>>x;
			res=__gcd(res,abs(x-i));
		}
		cout<<res<<"\n";
	}
}