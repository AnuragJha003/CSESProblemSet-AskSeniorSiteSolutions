#include<bits/stdc++.h>
using namespace std;
int main(){
    int r,c;
    cin>>r>>c;
    vector<vector<char>> b(r,vector<char> (c)),e(r,vector<char> (c));
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>b.at(i).at(j);
            e.at(i).at(j)=b.at(i).at(j);
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(b.at(i).at(j)>'0'&&b.at(i).at(j)<='9'){
                int t=b.at(i).at(j);
                for(int k=0;k<r;k++){
                    for(int d=0;d<c;d++){
                        if(abs(k-i)+abs(d-j)<=(int)(t-'0'))    e.at(k).at(d)='.';
                    }
                }
            }
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++)    cout<<e.at(i).at(j);
        cout<<endl;
    }
}