#include <iostream>
#include <map>
#include <algorithm>
using namespace std;

#define alaa_fayed ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

int main() {
    alaa_fayed
    int n,maxx=0;
    string s,a,gram;
map<string,int>m;
cin>>n>>s;
for(int i=0;i<n-1;i++){
    string gram = s.substr(i, 2);
    m[gram]++;
    if(m[gram]>maxx)
    {
        maxx=m[gram];
        a=gram;
    }
}
cout<<a;
}
		  	 	  	  		 	    	   			 	