#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		string s;
		cin>>s;
		s=" "+s;
		int ans=0;
		for(int i=1;i<=n;i++){
			ans=max(ans,s[i]-96);
		}
		cout<<ans<<endl;
		
		
	}
	
	
	return 0;
}
		 	 		 		 			 			   			   			