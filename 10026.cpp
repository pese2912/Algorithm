#include <iostream>
#include <cstdio>
#include <cstring>
#include <vector>
#include <deque>

int no_disable_color_cnt(char color);
int disable_color_cnt(char color, char color2);
char map[101][101] = { 0 ,};
int visit[101][101] = { 0, };
int n;
using namespace std;

int main()
{

	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{		
		for (int j = 0; j < n; j++)
		{
			cin >> map[i][j];
		}
	}

	//red 
	int cnt_r = no_disable_color_cnt('R');
	//green
	int cnt_g = no_disable_color_cnt('G');
	//blue
	int cnt_b = no_disable_color_cnt('B');


	for (int i = 0; i < 101; i++)
	{
		for (int j = 0; j < 101; j++)
		{
			visit[i][j] = 0;
		}
	}

	cout << cnt_r + cnt_b + cnt_g << " ";
	cout << cnt_b + disable_color_cnt('R', 'G')<<'\n';

	return 0;	
}
//no_disable
int no_disable_color_cnt(char color)
{
	int cnt= 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (map[i][j] == color && visit[i][j] == 0)
			{
				deque<int> que_x;
				deque<int> que_y;
				cnt++;
				int x = i, y = j;

				que_x.push_back(i);
				que_y.push_back(j);
				visit[i][j] = 1;

				while (true)
				{
					if (que_x.size() == 0)
					{
						break;
					}

					x = que_x.front();
					y = que_y.front();
					que_x.pop_front();
					que_y.pop_front();

					if (x + 1 >= 0 && x + 1< n && y >= 0 && y < n && visit[x + 1][y] == 0 && map[x + 1][y] == color)
					{
						que_x.push_back(x + 1);
						que_y.push_back(y);
						visit[x + 1][y] = 1;
					}
					if (x - 1 >= 0 && x - 1< n && y >= 0 && y < n && visit[x - 1][y] == 0 && map[x - 1][y] == color)
					{
						que_x.push_back(x - 1);
						que_y.push_back(y);
						visit[x - 1][y] = 1;
					}
					if (x >= 0 && x< n && y + 1 >= 0 && y + 1 < n && visit[x][y + 1] == 0 && map[x][y + 1] == color)
					{
						que_x.push_back(x);
						que_y.push_back(y + 1);
						visit[x][y + 1] = 1;
					}
					if (x >= 0 && x< n && y - 1 >= 0 && y - 1 < n && visit[x][y - 1] == 0 && map[x][y - 1] == color)
					{
						que_x.push_back(x);
						que_y.push_back(y - 1);
						visit[x][y - 1] = 1;
					}

				}
			}
		}
	}
	return cnt;
}

int disable_color_cnt(char color,char color2)
{
	int cnt = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if ((map[i][j] == color || map[i][j] == color2) && visit[i][j] == 0)
			{
				deque<int> que_x;
				deque<int> que_y;
				cnt++;
				int x = i, y = j;

				que_x.push_back(i);
				que_y.push_back(j);
				visit[i][j] = 1;

				while (true)
				{
					if (que_x.size() == 0)
					{
						break;
					}

					x = que_x.front();
					y = que_y.front();
					que_x.pop_front();
					que_y.pop_front();

					if (x + 1 >= 0 && x + 1< n && y >= 0 && y < n && visit[x + 1][y] == 0 && (map[x+1][y] == color || map[x+1][y] == color2))
					{
						que_x.push_back(x + 1);
						que_y.push_back(y);
						visit[x + 1][y] = 1;
					}
					if (x - 1 >= 0 && x - 1< n && y >= 0 && y < n && visit[x - 1][y] == 0 && (map[x - 1][y] == color || map[x - 1][y] == color2))
					{
						que_x.push_back(x - 1);
						que_y.push_back(y);
						visit[x - 1][y] = 1;
					}
					if (x >= 0 && x< n && y + 1 >= 0 && y + 1 < n && visit[x][y + 1] == 0 && (map[x][y+1] == color || map[x][y+1] == color2))
					{
						que_x.push_back(x);
						que_y.push_back(y + 1);
						visit[x][y + 1] = 1;
					}
					if (x >= 0 && x< n && y - 1 >= 0 && y - 1 < n && visit[x][y - 1] == 0 && (map[x][y - 1] == color || map[x][y - 1] == color2))
					{
						que_x.push_back(x);
						que_y.push_back(y - 1);
						visit[x][y - 1] = 1;
					}

				}
			}
		}
	}
	return cnt;
}
