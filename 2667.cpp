#include <iostream>
#include <cstdio>

using namespace std;

char map[25][25] = { 0, };

int visit[25][25] = { 0, };

int que_x[1000] = { 0, };
int que_y[1000] = { 0, };
int front = 0; 
int rear = 0;
int arr[1000] = {0,};

void push_x(int x)
{
	que_x[rear] = x;
}
void push_y(int y)
{
	que_y[rear++] = y;
}

int pop_x()
{
	return que_x[front];
}
int pop_y()
{
	return que_y[front++];
}

int main()
{
	int N;
	scanf("%d\n", &N);

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			cin >> map[i][j];
		
		}
	}
	int k = 0;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (map[i][j] == '1' && visit[i][j] == 0)
			{
				front = rear = 0;
				
				visit[i][j] = 1;
				push_x(i);
				push_y(j);
				int cnt = 0;
				int x=0, y=0;
				while (true)
				{
					if (front == rear)
					{
						arr[k++] = cnt;
						break;
					}

					x = pop_x();
					y = pop_y();
					cnt++;

					if (x-1 >= 0 && x-1 < N && y >= 0 && y < N && map[x-1][y] == '1' && visit[x-1][y] == 0)
					{
						push_x(x-1);
						push_y(y);
						visit[x-1][y] = 1;
					}

					 if (x +1 >= 0 && x +1  < N && y >= 0 && y < N && map[x+1][y] == '1' && visit[x+1][y] == 0)
					{
						push_x(x+1);
						push_y(y);
						visit[x+1][y] = 1;
					}
					 if (x >= 0 && x < N && y -1 >= 0 && y -1< N && map[x][y-1] == '1' && visit[x][y-1] == 0)
					{
						push_x(x);
						push_y(y-1);
						visit[x][y-1] = 1;
					}
					 if (x >= 0 && x < N && y +1 >= 0 && y +1  < N && map[x][y+1] == '1' && visit[x][y+1] == 0)
					{
						push_x(x);
						push_y(y+1);
						visit[x][y+1] = 1;
					}
				}

				for (int i = 0; i < front; i++)
				{
					que_x[i] = que_y[i] = 0;					
				}
			}
		}		
	}

	cout << k << '\n';
	for (int i = 0; i < k; i++)
	{
		for (int j = i; j < k-1; j++)
		{
			if (arr[i] > arr[j + 1])
			{
				int tmp = arr[i];
				arr[i] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}

	for (int i = 0; i < k; i++)
		cout << arr[i] << '\n';
	
	
	return 0;
}
