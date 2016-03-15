#include <iostream>
#include <cstdio>
#include <queue>

using namespace std;

int main()
{
	int num;
	scanf("%d", &num);
	priority_queue<int> que;
	for (int i = 0; i < num; i++)
	{
		int n;
		scanf("%d", &n);

		if (n == 0)
		{
			if (que.empty())
			{
				printf("0\n");
			}
			else{
				printf("%d\n", -que.top());
				que.pop();
			}
		}
		else
		{
			que.push(-n);
		}
	}

	return 0;
}
