#include<bits/stdc++.h>
using namespace std;
#define ld long double 
#define ll long long 

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n,a,b;
    cin>>n>>a>>b;
    vector<vector<ld> > dp(n+1,vector<ld> (6*n+1,0));
    dp[0][0]=1.0;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=6*n;j++)
        {
            for(int k=1;k<=6;k++) //states of the dp 
            {
                if(j-k>=0)
                {
                    dp[i][j]+=dp[i-1][j-k];//rolled i times and sum is coming as j 
                }
            }
            dp[i][j]=dp[i][j]/6;
        }
    }
    ld ans=0;
    for(int i=a;i<=b;i++)
    {
        ans+=dp[n][i];
    }//rolled  n times and sum is between a and b 
    ans*=1e6;
    ans=llround(ans);
    ans/=1e6;
    cout<<fixed<<setprecision(6)<<ans;
}