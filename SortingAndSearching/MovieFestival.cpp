#include<bits/stdc++.h>
using namespace std;

int main(){
int n;cin>>n;
vector<pair<int,int>> movies;
while(n--){
int a,b;
cin>>a>>b;
movies.push_back({b-1,a});//end and start timme of movies 
}
sort(movies.begin(),movies.end());
//movies sorted according to quickest end tiime as we need to cover max number of movies 
int taken=0;int ans=0;
for(auto x:movies){
if(x.second<=taken){
continue;
}//a movie is already running in here  
ans++;
taken=max(taken,x.first);
}
cout<<ans<<endl;
return 0;
}
