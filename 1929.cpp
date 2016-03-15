#include <iostream>
#include <cstdio>

using namespace std;
#define MAX 1000000
bool arr[MAX + 1];

int main()
{
	int a, b;
	scanf("%d %d", &a,&b);
	
	arr[0] = arr[1] = true;

	for (int i = 2; i*i <=MAX; i++)
	{
		if (arr[i] == false)
		{
			for (int j = i + i; j <= MAX; j+=i)
				arr[j] = true;
		}
	}

	for (int i = a; i <= b; i++)
	{
		if (arr[i] == false)
			cout << i << '\n';
	}
	
	return 0;
}
