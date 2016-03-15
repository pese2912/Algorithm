#include <iostream>
#include <set>
#include <cstdio>

using namespace std;

int main()
{
	int n, m;
	multiset<int> sangGeun;
	

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
		
		cout << sangGeun.count(x)<<" ";
	
	}
	cout << '\n';


	return 0;
}
