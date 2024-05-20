#include<bits/stdc++.h>
#define ci const int
#define ll long long
using namespace std;
ci N=1e5+5;
int a[N],b[N],n;
void Work(){
	cin>>n;
	for(int i=1;i<=n;++i)cin>>a[i];
	sort(a+1,a+n+1);
	if(n&1){
		puts("NO");
		return;
	}
	int m=0;
	for(int i=1;i<=n/2;++i)
		b[++m]=a[i],b[++m]=a[i+n/2];
	if(b[1]==b[n]){
		puts("NO");
		return;
	}
	for(int i=1;i<n;++i)
		if(b[i]==b[i+1]){
			puts("NO");
			return;
		}
	puts("YES");
	for(int i=1;i<=n;++i)cout<<b[i]<<' ';
	cout<<endl;
}
int main(){
	int T;
	cin>>T;
	while(T--)Work();
	return 0;
}