#include <iostream>
#include <cstdio>


using namespace std;

int main()
{
	int data;

	scanf("%d", &data);

	for (int test = 0; test < data; test++)
	{
		int a, b;
		scanf("%d %d", &a,&b);
		int arr[10] = { 0, };
		int cnt = 0;
		if (a>=10)
			a = a % 10;
		arr[cnt] = a;
		while (true)
		{
			int tmp = (arr[cnt++] * a) % 10;
			
			if (tmp == a){
				break;
			}

			arr[cnt] = tmp;

		}
		if (b%cnt == 0)
		{
			if (arr[cnt - 1]==0)
				cout << 10 << '\n';
			else
			cout << arr[cnt - 1] << '\n';
		}
		else
			cout << arr[b%cnt-1] << '\n';
	}

	return 0;
}
