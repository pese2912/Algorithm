#include <iostream>
#include <cstdio>
#include <string.h>

using namespace std;

int main()
{
	int data;
	scanf("%d", &data);
	for (int test = 0; test < data; test++)
	{
		int h, w, n;
		scanf("%d %d %d", &h, &w, &n);

		int layer = 0, room = 0;

		if (n%h == 0)
		{
			layer = h;
		}
		else
			layer = n%h;

		if (n%h == 0)
		{
			if (n == h)
			{
				room = 1;
			}
			else{
				room = n / h;
			}
		}
		else{
			if (n / h == 0)
			{
				room = 1;
			}
			else{
				room = n / h + 1;
			}
		}

		printf("%d",layer);
		if (room<10)
		printf("0%d\n", room);
		else
			printf("%d\n", room);


	}
	return 0;
}
