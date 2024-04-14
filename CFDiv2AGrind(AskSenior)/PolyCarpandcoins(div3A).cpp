#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    for(int i=0; i<n; i++){

        long long int x;
        cin >> x;

        long long int temp = x/3;
        long long int temp2 = temp;

        if(x%3==1) temp+=1;

        else if(x%3==2) temp2+=1;

        cout<<temp<<" "<<temp2<<endl;
        }


    }
