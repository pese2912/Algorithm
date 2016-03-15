#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;
bool prime(int x)
{

	if (x < 2)
	{
		return false;

	}
	else{
		for (int i = 2; i*i <= x; i++)
		{
			if (x%i == 0)
				return false;
			
		}
		return true;
	}
}
int main()
{

	int n;
	cin >> n;
	vector<int> v;
	int cnt = 0;
	for (int i = 0; i < n; i++)
	{
		int x;
		
		scanf("%d", &x);
		if (prime(x))
		{
			cnt++;
		}
		//v.push_back(x);		
	}
	printf("%d\n", cnt);

	return 0;
}
