#include<bits/stdc++.h>
using namespace std;
int t,n,a[100005];
int main(){
	cin>>t;
	while(t--){
		set<int>st;	
		cin>>n;int ans=0;
		for(int i=1;i<=n;i++){
			cin>>a[i];
			if(i==1) continue;
			if(a[i]!=a[i-1])
			st.insert(a[i-1]);
			if(a[i]<a[i-1])
				ans=st.size();
			if(st.count(a[i]))
				ans=st.size();
		}
		cout<<ans<<"\n";
	}
	return 0;
}