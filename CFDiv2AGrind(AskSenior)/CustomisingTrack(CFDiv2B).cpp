#include <bits/stdc++.h>
#define int long long
#define mod 1000000007
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> v(n);
        int sum=0;
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            sum+=v[i];
        }
        int x=sum%n;
        //cout<<sum<<endl;
        cout<<x*(n-x)<<endl;
    }

    return 0;
}