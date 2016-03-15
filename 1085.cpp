#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main()
{
	int x, y, w, h;
	scanf("%d %d %d %d", &x,&y,&w,&h);

	int arr[4] = { 0, };
	arr[0] = abs(0 - x); arr[1] = abs(x - w);
	arr[2] = abs(0 - y); arr[3] = abs(y - h);

	int min = arr[0];
	for (int i = 0; i < 4; i++)
	{
		if (min>arr[i])
			min = arr[i];
	}
	cout << min<<'\n';
	return 0;
}
