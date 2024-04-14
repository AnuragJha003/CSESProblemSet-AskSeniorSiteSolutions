#include <iostream>
using namespace std;
int main()
{
	int n, t ;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		cin >> n;
		int value = 0,k = 1;
		while (k <= n)
		{
			if (value % 3 == 0 || value % 10 == 3)
				value++;
			else
			{
				value++;
				k++;
			}
		}
		cout << value - 1<<'\n';
	}
}