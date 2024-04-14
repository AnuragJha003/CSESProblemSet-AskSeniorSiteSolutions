#include<bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(0);
using namespace std;

int h, w;
char a[35][35], b[35][35];

bool check(int x, int y){
    for(int i=0; i<h; i++){
        for(int j=0; j<w; j++){
            if(a[(x+i)%h][(y+j)%w]!=b[i][j]) return 0;
        }
    }
    return 1;
}

int main(){
    fastio

    cin >> h >> w;
    for(int i=0; i<h; i++) for(int j=0; j<w; j++) cin >> a[i][j];
    for(int i=0; i<h; i++) for(int j=0; j<w; j++) cin >> b[i][j];
    for(int i=0; i<h; i++){
        for(int j=0; j<w; j++){
            if(check(i, j)){
                cout << "Yes" << '\n';
                return 0;
            }
        }
    }
    cout << "No" << '\n';
}
