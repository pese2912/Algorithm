#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

int main()
{
	char a[101];
	cin >> a;

	int len=0;
	for (len = 0; a[len]; len++);

	printf("%d\n", len);
	return 0;
}
