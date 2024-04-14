#include<bits/stdc++.h>
using namespace std;
#define int long long 


signed main(){
int n;cin>>n;
vector<array<int,3>> A;
set<int> free;
int used=0;
for(int i=1;i<=n;i++){
int a,b;cin>>a>>b;
A.push_back({a,-1,i});
A.push_back({b,1,i});	
}

vector<int> room(n+1,-1);
sort(A.begin(),A.end());//sorted according to arrival time 
for(auto x:A){
	if(x[1]==1){
		free.insert(room[x[2]]);//insert this room is free now 
	}
	else{
		//arrival h
		if(free.empty()) { free.insert(used+1);++used; }//no room is free  a new room allocated
		room[x[2]]=*free.begin();//free room given to this index i *is the pointer to this new room at the beginning
		free.erase(free.begin());//removed from free as this room is already occupied
	}
}
cout<<used<<endl;
for(int i=1;i<=n;i++){
	cout<<room[i]<<" ";
}
}