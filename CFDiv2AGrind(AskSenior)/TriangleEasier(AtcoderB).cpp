#include<bits/stdc++.h>
using namespace std;
vector<int> a[110];
bool vis[110];
int ans;
main(){
  int n,m;
  cin>>n>>m;
  for (int i=1;i<=m;i++){
    int u,v;
    cin>>u>>v;
    a[u].push_back(v);a[v].push_back(u);
    
  }
  
  for (int v=0;v<n;v++)
  {
    if (vis[v]) continue;
    vis[v]=1;
    int len=a[v].size();
  
    for (int i=0;i+1<len;i++)
    { int u1=a[v][i];
      if (vis[u1]) continue;
      for(int j=i+1;j<len;j++)
      {
        int u2=a[v][j];
        if(vis[u2]) continue;
        int l=a[u1].size();
        for (int k=0;k<l;k++) {
          if (a[u1][k]==u2)
          {
            ans++;
            break;
          }
        }
      }
    }
    
    
  }
  cout<<ans;
  return 0;
}