#include <iostream>
#include <ostream>

using namespace std;

bool ispowerof4(int n)
{
	if (n == 0)
		return 0;
	while(n != 1)
	{
		if(n % 4 != 0)
			return 0;
		n = n / 4;
	}
	return 1;
}

int main()
{
	int test_num = 28;
	if (ispowerof4(test_num))
		cout << "test_num" << " is a power of 4" << endl;
	else 
		cout << "test_num" << " is not power of 4" << endl;
	return 0;
}
