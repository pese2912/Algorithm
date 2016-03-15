#include <iostream>

using namespace std;
int c1 = 0, c2 = 0;
int fibo(int n)
{
	if (n == 0)
	{
		c1++;
		return 0;
		
	}
	else if (n == 1)
	{
		c2++;
		return 1;
	}
	else
		return fibo(n - 1) + fibo(n - 2);
}
int main()
{
	int Test;
	cin >> Test;
	for (int data = 0; data < Test; data++)
	{
		int num;
		cin >> num;
		fibo(num);
		cout << c1 << " " << c2 << endl;
		c1 = c2 = 0;
	}
	return 0;
}
