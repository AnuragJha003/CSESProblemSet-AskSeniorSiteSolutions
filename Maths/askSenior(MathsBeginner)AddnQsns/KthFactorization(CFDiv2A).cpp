#include <bits/stdc++.h>
using namespace std;
 
int main()
{
	int n,k,d=2; cin>>n>>k; //d is the product 
	vector<int> a;
	while (d<=n && k) //k is our positive number 
	{
		if (k==1) d=n;
		if (n%d==0) 
			n/=d, a.push_back(d), k--;
		else
			d++;
	}
	if (k==0)
		for (int v: a) cout<<v<<" ";
	else
		cout<<-1;
}