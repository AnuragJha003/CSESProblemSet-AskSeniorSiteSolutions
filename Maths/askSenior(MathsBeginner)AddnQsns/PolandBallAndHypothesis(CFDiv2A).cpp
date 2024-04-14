#include<iostream>
#include<math.h>
using namespace std;

bool simple_num(int a) {
	for (int i = 2;i*i  <= a;i++) { //root n time complexity for prime check 
		if (a % i == 0)return 0;
	}
	return 1;
}

int main() {
	int n;cin >> n;
	for (int m = 1;m < 1000;m++) {
		int x = n * m + 1;
		if (!simple_num(x))
		{
			cout << m;
			break;
		}
	}
}