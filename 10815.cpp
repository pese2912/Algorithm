#include <iostream>
#include <set>
#include <cstdio>

using namespace std;

int main()
{
	int n, m;
	set<int> sangGeun;
	set<int> mnum;

	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		int x;
		scanf("%d", &x);
		sangGeun.insert(x);
	}

	scanf("%d", &m);
	
	
	for (int i = 0; i < m; i++)
	{
		int x;
		scanf("%d", &x);
		set<int>::iterator iterPos = sangGeun.find(x);
		
		if (iterPos != sangGeun.end())
		{
			cout << "1" << " ";
		}
		else
			cout << "0" << " ";
	}
	cout << '\n';


	return 0;
}
