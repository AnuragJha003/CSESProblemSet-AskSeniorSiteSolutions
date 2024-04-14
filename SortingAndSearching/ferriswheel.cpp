#include <bits/stdc++.h>
 
using namespace std;
int main(){
    int n,x;cin>>n>>x;
    vector<int> a(n);
    for(int i=0;i<n;i++)cin>>a[i];
	sort(a.begin(),a.end());
	int l=0;int r=n-1;
	int done=0;
	while(l<r){
	if(a[l]+a[r]<=x){done++;l++;}
	r--;
	}
	cout<<n-done<<endl;
    return 0;
}