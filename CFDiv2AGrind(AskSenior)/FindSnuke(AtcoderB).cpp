#include<bits/stdc++.h> 
using namespace std; 
int n,m,d1[8]={1,1,1,0,0,-1,-1,-1},d2[8]={-1,0,1,-1,1,-1,0,1},xx,yy; 
char c[110][110];
int main(){ 
	cin>>n>>m;
    for(int i=1;i<=n;i++)
    	for(int j=1;j<=m;j++)
    		cin>>c[i][j];
    for(int i=1;i<=n;i++)
    	for(int j=1;j<=m;j++){
    		if(c[i][j]=='s')
    		for(int k=0;k<8;k++)
    			if(c[i+d1[k]][j+d2[k]]=='n'){
    				xx=i+4*d1[k],yy=j+4*d2[k];
    				if(xx>0&&xx<=n&&yy>0&&yy<=m&& c[xx][yy]=='e')
    					if(c[i+2*d1[k]][j+2*d2[k]]=='u'&&c[i+3*d1[k]][j+3*d2[k]]=='k')
							for(int kk=0;kk<5;kk++)
								printf("%d %d\n",i+kk*d1[k],j+kk*d2[k]);
				}
		}	
    return 0; 
}