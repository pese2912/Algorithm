#include <iostream>
#include <cstdio>
using namespace std;
int gcd(int a, int b)
{
	if (b == 0)
		return a;
	else
	{
		return gcd(b, a%b);
	}


}
int main()
{
	int a, b;
	cin >> a >> b;

	int gc = gcd(a, b);

	printf("%d\n",gc);
	printf("%d\n", ((a/gc) * (b/gc))*gc );

	return 0;
}
