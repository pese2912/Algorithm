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
	int n;
	cin >> n;
	for (int i = 0; i < n; i++){
		int a, b;
		cin >> a >> b;

		int gc = gcd(a, b);


		printf("%d\n", ((a / gc) * (b / gc))*gc);
	}
	return 0;
}
