#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
void slove()
{
    int l,r;
    cin>>l>>r;
    if(r<2*l) cout<<-1<<" "<<-1<<endl;
    else cout<<l<<" "<<l*2<<endl;
    return ;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        slove();
    }
}