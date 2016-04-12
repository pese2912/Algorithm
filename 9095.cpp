#include <iostream>
#include <cstdio>

using namespace std;


int main()
{
	
	int data;
	scanf("%d", &data);
	
	for (int test = 0; test < data; test++)
	{
		int num;
		scanf("%d", &num);
		int arr[11] = { 0, };
		arr[1] = 1; arr[2] = 2; arr[3] = 4;

		for (int i = 4; i <= num; i++)
		{
			arr[i] = arr[i - 1] + arr[i - 2] + arr[i - 3];
		}

		cout << arr[num] << '\n';
	}

	return 0;
}
