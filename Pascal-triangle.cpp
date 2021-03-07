#include <iostream>

using namespace std;

int factorial(int num)
{
	if (num == 0) return 1;
	else 
		return num * factorial(num - 1);
}

int Binomialcoefficient(int n, int k)
{
	return factorial(n) / (factorial(k) * factorial(n - k));
}


int main()
{
	int n = 6;
	for (int i = 1; i <= n; i ++)
	{
		for (int k = 0; k <= i - 1; k ++)
		{
			cout << Binomialcoefficient(i, k) << ' ';
		}			
    	cout << endl;	
	}
	return 0;
}
