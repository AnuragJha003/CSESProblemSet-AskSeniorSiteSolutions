#include<bits/stdc++.h>
using namespace std;

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int testcases;
    cin>>testcases;
    while(testcases--)
    {
        int n,m;
        cin>>n>>m;
        long arr[n*m];
        for(int i=0;i<n*m;i++)
            cin>>arr[i];
        sort(arr,arr+n*m);
        long long ans=0;
        if(n*m>2)
        {
            long arrMax=arr[n*m-1];
            long arrMin1=arr[0];
            long arrMin2=arr[1];
            int mx=(n>m?n:m);
            int mn=(n>m?m:n);
            long long ansMin=(arrMax-arrMin2)*(mn-1)+(arrMax-arrMin1)*(n*m-mn);
            long long arrMax1=arr[n*m-1];
            long long arrMax2=arr[n*m-2];
            long long arrMin=arr[0];
            long long ansMax=(arrMax2-arrMin)*(mn-1)+(arrMax1-arrMin)*(n*m-mn);
            ans=max(ansMax,ansMin);
        }
        else
        {
            ans=abs(arr[0]-arr[1]);
        }
        cout<<ans<<"\n";
    }
    return 0;
}