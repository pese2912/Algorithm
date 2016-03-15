#include <iostream>
#include <cstdio>
#include <algorithm>
#include <set>
#include <vector>
using namespace std;
int a[5000001] = { 0, };

int main()
{
	int n, k;
	scanf("%d %d", &n, &k);
	k--;
	for (int i = 0; i < n; i++)
	{
		
		scanf("%d", &a[i]);	
	}
	nth_element(a, a + k, a+n);
	printf("%d\n", a[k]);
	return 0;
}
