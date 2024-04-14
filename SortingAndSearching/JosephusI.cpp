#include <bits/stdc++.h>
#include <stdlib.h>
#include <time.h> 
 
using namespace std;

int f(int n,int i){
if(n&1){
//if odd 
int toremove=(n+1)/2;
if(i<toremove){
return 2*i-1;
}
if(i==toremove)return 0;
int num=f(n-toremove,i-toremove);
return 2*(num+1);
}
int toremove=n/2;
if(i<=toremove)return 2*i-1;
int num=f(n-toremove,i-toremove);
return 2*num;
}
int main(){
    int n;cin>>n;
	for(int i=1;i<=n;i++){
	cout<<f(n,i)+1<<" ";
	}
   //return 0;
}