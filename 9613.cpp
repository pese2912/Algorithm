#include <iostream>
#include <cstdio>
#include <string>
#include <vector>

using namespace std;

int gcd(int a, int b)
{
	if (b == 0)
		return a;
	else
	{
		return gcd(b, a%b);
	}


}
int main()
{
	int n;
	cin >> n;
	for (int data = 0; data < n; data++){
	
		int num;
		scanf("%d", &num);
		vector<int> v;

		for (int i = 0; i < num; i++)
		{
			int x;
			scanf("%d",&x);
			v.push_back(x);
		}
		int sum = 0;
		int len = v.size();
		for (int i = 0; i < len; i++)
		{
			for (int j = i; j < len - 1; j++)
			{
				sum += gcd(v[i], v[j + 1]);
			}
		}
		cout << sum << '\n';
	}
	return 0;
}
