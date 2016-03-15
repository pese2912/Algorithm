#include <iostream>
#include <cstdio>
#include <queue>

using namespace std;

int main()
{
	int num, jin;
	cin >> num >> jin;
	deque<int> que;

	while (true)
	{
		if (num == 0)
		{
			break;
		}
		que.push_front(num % jin);
		num = num / jin;
	}
	
	for (int i = 0; i < que.size(); i++)
	{
		if (que[i] >= 10 && que[i] <= 35)
		{
			que[i] -= 10;
			printf("%c",que[i]+65);
		}
		else
			printf("%d",que[i]);
	}



	return 0;

}
