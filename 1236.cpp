#include <iostream>
#include <cstdio>

using namespace std;

int main()
{

	int n, m;
	char map[51][51] = { 0, };

	scanf("%d %d", &n,&m);
	int cnt = 0;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> map[i][j];
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (map[i][j] == '.')
			{
				int flagx = 0;
				int flagy = 0;
				
				for (int k = 0; k < n; k++)
				{
					if (map[k][j] == 'X')
					{
						flagx = 1;
						break;
					}
				}

				for (int k = 0; k < m; k++)
				{
					if (map[i][k] == 'X')
					{
						flagy = 1;
						break;
					}
				}

				if (flagx == 0 && flagy == 0)
				{
					map[i][j] = 'X';
					cnt++;
				}

			}
		}
		
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (map[i][j] == '.')
			{
				int flagx = 0;
				int flagy = 0;

				for (int k = 0; k < n; k++)
				{
					if (map[k][j] == 'X')
					{
						flagx = 1;
						break;
					}
				}

				for (int k = 0; k < m; k++)
				{
					if (map[i][k] == 'X')
					{
						flagy = 1;
						break;
					}
				}

				if (flagx == 0 || flagy == 0)
				{
					map[i][j] = 'X';
					cnt++;
				}

			}
		}
	}


	printf("%d\n",cnt);

	return 0;
}
