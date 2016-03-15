#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

long long gcd(long long a, long long b)
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
	

		long long a, b;
		cin >> a >> b;
		
		long long gc = gcd(a, b);


		for (int i = 0; i < gc; i++)
		{
			cout << '1';
		}
		cout << '\n';
	
	return 0;
}
