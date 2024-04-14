#include <bits/stdc++.h>
#include <stdlib.h>
#include <time.h> 
 
using namespace std;

int main(){
    int n;cin>>n;
	vector<int> A;
	A.push_back(INT_MAX);
   while(n--){
   int x;cin>>x;
   auto it=upper_bound(A.begin(),A.end(),x);
   if(it==A.end()) A.push_back(x);
   else *it=x;
   }
   cout<<A.size()<<endl;
   //return 0;
}