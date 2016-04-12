#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
	int n;
	scanf("%d", &n);
	int p[1001] = { 0, };

	for (int i = 1; i <= n; i++)
		scanf("%d", &p[i]);

	int D[1001] = { 0, };

	for (int i = 1; i <= n; i++)
	{
		int max = 0;
		for (int j = 1; j <= i; j++)
		{
			if (max < p[j] + D[i - j])
			{
				max = p[j] + D[i - j];
			}
		}
		D[i] = max;

	}
	cout << D[n] << '\n';

	return 0;
}
