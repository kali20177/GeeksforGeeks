#include <cstdio>
#include <iostream>

using namespace std;

int multiply3p5(int x)
{
	return (x << 1) + x + (x >> 1);
}

int main()
{
	int x = 4;
	printf("%d\n", multiply3p5(x));
	return 0;
}
