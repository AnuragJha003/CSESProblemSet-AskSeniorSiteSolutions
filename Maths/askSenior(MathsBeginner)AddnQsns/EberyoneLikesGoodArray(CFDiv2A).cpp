#include<iostream>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int n,c=0;cin>>n;
		long long a[101];
		for(int i=1;i<=n;i++){
			cin>>a[i];
			if((i!=1)&&(a[i]%2)==(a[i-1]%2))c++;
		}
		cout << c <<endl;
	}
} 
//taking input as element and check if both the adj elements are odd then c++
