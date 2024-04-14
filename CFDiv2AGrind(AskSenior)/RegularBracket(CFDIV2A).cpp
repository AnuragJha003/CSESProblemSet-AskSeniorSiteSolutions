#include<bits/stdc++.h>
#pragma GCC optimize("O3")
using namespace std;

int main(){
    int v, x,z,y;
    cin >> v;
    while(v--){
        cin >>x;
        for(int i =0; i < x; i++){
            y=i;
            while(y--){
                cout <<"(";
            }
            z=x-i;
            while(z--){
                cout << "()";
            }
            y=i;
            while(y--){
                cout << ")";
            }
            cout << "\n";
        }
    }
}
 				  	   	   	   					  	  		