#include <iostream>
#include <cstdio>
using namespace std;

int arr[1001] = { 0, };

int main()
{
	int n;
	scanf("%d", &n);

	arr[0] = 0, arr[1] = 1, arr[2] = 3;

	for (int i = 3; i <= n; i++)
	{
		arr[i] = arr[i - 1] + 2 * arr[i - 2];
		arr[i] %= 10007;
	}

	cout << arr[n] % 10007 << '\n';

	return 0;
}
