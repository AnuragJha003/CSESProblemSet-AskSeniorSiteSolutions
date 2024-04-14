#include <bits/stdc++.h>
 
using namespace std;
int main(){
    int n,m,k;cin>>n>>m>>k;
    vector<int> a(n);vector<int> b(m);	
    for(int i=0;i<n;i++)cin>>a[i];
	for(int i=0;i<m;i++)cin>>b[i];
	sort(a.begin(),a.end());
	sort(b.begin(),b.end());
	int ap=0;int bp=0;int ans=0;
	while(ap<n && bp<m){
	if(abs(a[ap]-b[bp])<=k){
	ans++;ap++;bp++;
	}
	else{
	if(a[ap]<b[bp])ap++;
	else bp++;
	}
	}
	cout<<ans<<endl;
    return 0;
}