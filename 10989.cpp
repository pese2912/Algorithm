#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	int num;
	int arr[10001] = {0,};
	
	scanf("%d", &num);
	for (int i = 0; i < num; i++)
	{
		int n;
		scanf("%d", &n);
		arr[n]++;
	}
	for (int i = 1; i <= 10000; i++)
	{
		if (arr[i] != 0)
		{
			for (int j = 1; j <= arr[i]; j++)
			{
				printf("%d\n", i);
			}
		}
	}
	return 0;
}
