# include<iostream>
# include<vector>
using namespace std;

int main(){
   
	int n,m;
	cin>>n>>m;
	
	vector<bool>a(n-1);
	for(int i = 0;i<m;i++){
		int x ;
		cin >> x;
		x--;
		a[x] = true; 
	}
	for (int i = 0,j;i<n;i=j+1){
		j = i ;
		 while(j<n-1 && a[j]){
		 	j++;
		 }
		  for(int x = j;x>=i;x--){
		  	cout<<x+1<<" ";
		  }
	}
	cout<<"\n";
	return 0;
}