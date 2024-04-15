// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
map<pair<int,int>,bool> mp;
int main(){
	int len;
	string s;
	scanf("%d",&len);
	cin>>s;
	bool flag=false;
	int x=0,y=0;
	mp[make_pair(x,y)]=true;
	for(int i=0;i<s.size();i++){
		if(s[i]=='R') x++;
		if(s[i]=='L') x--;
		if(s[i]=='U') y++;
		if(s[i]=='D') y--;
		if(mp[make_pair(x,y)]==true) flag=true;
		mp[make_pair(x,y)]=true;
	}
	if(flag) puts("Yes");
	else puts("No");
}