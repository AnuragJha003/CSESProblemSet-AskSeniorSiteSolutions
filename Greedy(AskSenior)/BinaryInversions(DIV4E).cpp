#include<bits/stdc++.h>
using namespace std;
typedef long long LL;


void solve(){
    LL n;cin>>n;
    LL a[n]; LL ans=0;LL s1=0;LL fzero=-1;LL s2=0;LL s3=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]==1)ans++;
        else s1=s1+ans;
        if(fzero==-1 && a[i]==0){
            fzero=i;
            a[i]=1;//flip first occurance 
        }
    }//s1 is direct computation of inversions in the current one 
    //s2 hoga first zero flipped 
    ans=0;
     for (int i=0;i<n;i++)
		if (a[i]==1)
			ans++;
		else  
			s2+=ans;
    //this s2 is computation of inverse in the current one(first zero flipped)
    a[fzero]=0;//flipping it back and now 
    //s3 will be the flipping of last occurance of 1 to 0 so that the current 1's se maximise ho jaye computation 
    ans=0;
    for (int i=n-1;i>=0;i--)
		if (a[i]==1)
		{
			a[i]=0;
			break;
		}
	for (int i=0;i<n;i++)
		if (a[i]==1)
			ans++;
		else  
			s3+=ans;
	
    cout<<max({s1,s2,s3})<<"\n";
}
int main(){
    int t;cin>>t;
    while(t--){
        solve();
    }
}