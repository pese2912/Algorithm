#include <iostream>
#include <deque>

using namespace std;

int check[101] = { 0, };
int graph[101][101] = { 0, };
int main()
{
	int num,pair;	
	cin >> num >> pair;
	deque<int> queue;


	for (int i = 0; i < pair; i++)
	{
		int x, y;
		cin >> x >> y;
		graph[x][y] = 1;
		graph[y][x] = 1;
	}

	int com = 1,cnt=0;
	check[1] = 1;
	queue.push_back(com);
	check[com] = 1;
	while (true)
	{
		if (queue.empty())
		{
			break;
		}

		com = queue[0]; queue.pop_front();

		for (int i = 0; i <=num; i++)
		{
			if (graph[com][i] == 1 && check[i] == 0)
			{
				queue.push_back(i);
				check[i] = 1;
				cnt++;
			}
		}

	}
	cout << cnt << endl;

	

	return 0;
}
