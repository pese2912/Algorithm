#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	vector<pair<int,int>> point;
	int num;
	
	scanf("%d", &num);

	for (int i = 0; i < num; i++)
	{
		int x, y;
		scanf("%d",&x);
		scanf("%d",&y);
		point.push_back({ x, y });
		
	}

	sort(point.begin(), point.end());


	for (auto x : point)
	{
		printf("%d ",x.first);
		printf("%d\n",x.second);
	}
	return 0;
}
