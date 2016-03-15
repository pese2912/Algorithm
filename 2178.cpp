#include <iostream>
#include <deque>
using namespace std;

char map[101][101] = {0,};
int visit[101][101] = { 0,};

int main(){

	deque<int> queue_x;
	deque<int> queue_y;
	deque<int> queue_cnt;
	int n, m;

	cin >> n >> m;

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			cin >> map[i][j];
		}

	}

	int x = 1,y = 1;
	
	visit[x][y] = 1;
	queue_x.push_back(x);
	queue_y.push_back(y);
	queue_cnt.push_back(1);
	int cnt = 0;
	while (true)
	{
		if (queue_x.empty() && queue_y.empty())
		{
			
			break;
		}
		
		x = queue_x[0]; queue_x.pop_front();
		y = queue_y[0]; queue_y.pop_front();
		cnt = queue_cnt[0]; queue_cnt.pop_front();

		if (x == n && y == m)
		{

			break;
		}
		if (x >= 1 && x <= n  && y+1 >= 1 && y+1 <= m && map[x][y+1] == '1' && visit[x][y+1] == 0)
		{
			queue_x.push_back(x);
			queue_y.push_back(y + 1);
			queue_cnt.push_back(cnt + 1);
			visit[x][y + 1] = 1;
		}

		if (x >= 1 && x <= n  && y - 1 >= 1 && y - 1 <= m && map[x][y - 1] == '1' && visit[x][y - 1] == 0)
		{
			queue_x.push_back(x);
			queue_y.push_back(y - 1);
			queue_cnt.push_back(cnt + 1);
			visit[x][y -1] = 1;

		}

		if (x+1 >= 1 && x+1 <= n  && y  >= 1 && y <= m && map[x+1][y] == '1' && visit[x+1][y] == 0)
		{
			queue_x.push_back(x+1);
			queue_y.push_back(y);
			queue_cnt.push_back(cnt + 1);
			visit[x+1][y] = 1;
		}

		if (x - 1 >= 1 && x - 1 <= n  && y >= 1 && y <= m && map[x- 1][y] == '1' && visit[x - 1][y] == 0)
		{
			queue_x.push_back(x - 1);
			queue_y.push_back(y);
			queue_cnt.push_back(cnt + 1);
			visit[x+1][y] = 1;

		}

	}
	cout << cnt << endl;
	return 0;
}
