#include<bits/stdc++.h>
using namespace std;
#define int long long 
signed main(){
int n;cin>>n;
int tot=0;
vector<int> duration(n);
for(int i=0;i<n;i++){
int x;cin>>x;
duration[i]=x;//storing the durations 
int y;cin>>y;
tot+=y;//sum of all the deadlines 
}
sort(duration.begin(),duration.end());
//shortest duration one taken into consideration as of now 
int sum=0;
for(int i=0;i<n;i++){
sum=sum+duration[i];//adding to the total duration as of now 6 +8+7
tot=tot-sum;//subtracting it from the total deadline max reward 
}
cout<<tot<<endl;//answer returrn 
}