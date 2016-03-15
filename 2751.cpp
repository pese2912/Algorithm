#include <iostream>
#include <vector>
#include <cstdio>
#include <algorithm>

using namespace std;

int main()
{
	int num;
	scanf("%d", &num);

	vector<int> vc;
	for (int i = 0; i < num; i++)
	{
		int n;
		scanf("%d", &n);
		vc.push_back(n);
	}
	sort(vc.begin(), vc.end());

	
	for (auto x : vc)
	{
		printf("%d\n", x);
		
	}


	return 0;

}
