#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define minel(a) *min_element(a,a+n)
#define maxel(a) *max_element(a,a+n)
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,flag=0,y=0;
        cin>>n;
        string a;
        char x;
        cin>>a;
        string b=a;
        x=a[0];
        for(int i=1;i<n;i++){
          if(a[i]<x){
            flag=1;
            y=i;
            x=a[i];
          }
        }
            for(int i=1;i<n;i++){
             if(a[i]==x){
            flag=1;
            y=i;
            x=a[i];
          }
        }
        
      
         cout<<b[y];
        for(int i=0;i<n;i++){
         if(y!=i){
            cout<<b[i];
         }
        }
        cout<<endl;
    
    }
  return 0;
}