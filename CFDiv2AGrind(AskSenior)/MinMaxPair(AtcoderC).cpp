#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N=1e6+10;
int a1,a2,ans;
int a[N],b[N];

signed main()
{
    int n;
    cin>>n;
    
    for (int i =1;i<=n;i++) cin>>a[i];//,b[a[i]]=i;
    for (int i =1;i<=n;i++) {
		if (a[i]==i) a1++;
		else if (a[a[i]]==i) ans++;
	}
    ans>>=1;
    ans+=a1*(a1-1)/2;
    
    cout<<ans;
    return 0;
}

