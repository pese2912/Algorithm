#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	vector<pair<int, int>> point;
	int num;

	scanf("%d", &num);

	for (int i = 0; i < num; i++)
	{
		int x, y;
		scanf("%d", &x);
		scanf("%d", &y);
		point.push_back({ y, x });

	}

	sort(point.begin(), point.end());


	for (auto x : point)
	{
		printf("%d ", x.second);
		printf("%d\n", x.first);
	}
	return 0;
}
