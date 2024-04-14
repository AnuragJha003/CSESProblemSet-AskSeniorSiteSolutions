#include<bits/stdc++.h>
using namespace std;
#define ld long double 
#define ll long long 


ll dr[4]={1,-1,0,0};
ll dc[4]={0,0,1,-1};

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n;
    cin>>n;
    ld dp[n+1][8][8]={};
    ld ans[8][8];
    for(int i=0;i<8;i++)
    {
        for(int j=0;j<8;j++)
        {
            ans[i][j]=1;
        }
    }
    for(int i=0;i<8;i++)
    {
        for(int j=0;j<8;j++) //go for all possible i and j 
        {
            for(int k=0;k<=n;k++)
            {
                for(int i1=0;i1<8;i1++)
                {
                    for(int j1=0;j1<8;j1++)///3 states for the dp
                    {
                        dp[k][i1][j1]=0;
                    }
                }
            }
            dp[0][i][j]=1;
            for(int k=0;k<n;k++)
            {
                for(int i1=0;i1<8;i1++)
                {
                    for(int j1=0;j1<8;j1++)
                    {//3 loops to iterate over the dp 
                        ld dir=0;
                        for(int f=0;f<4;f++)//all 4 possible directions 
                        {
                            ll u=i1+dr[f],v=j1+dc[f];
                            if(u>=0 && u<8 && v>=0 && v<8)
                            {
                                dir++;
                            }
                        }
                        for(int f=0;f<4;f++)
                        {
                            ll u=i1+dr[f],v=j1+dc[f];
                            if(u>=0 && u<8 && v>=0 && v<8)
                            {
                                dp[k+1][u][v]+=dp[k][i1][j1]/dir; //update with the total directions 
                            }
                        }
                    }
                }
            }
            for(int i1=0;i1<8;i1++)
            {
                for(int j1=0;j1<8;j1++)
                {
                    ans[i1][j1]*=(1-dp[n][i1][j1]); //iterate thru the dp to get the answer of 1- .. and multiply with it 
                }
            }
        }
    }
    ld expc=0;
    for(int i=0;i<8;i++)
    {
        for(int j=0;j<8;j++)
        {
            expc+=ans[i][j];
        }
    }
    cout<<fixed<<setprecision(6)<<expc;
}