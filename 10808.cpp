#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

int main()
{
	
	string a;
	int arr[26] = { 0, };
	cin >> a;
	int len = a.length();
	for (int i = 0; i < len; i++)
	{
		arr[a[i]-97]++;
	}
	for (int i = 0; i < 26; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");

	return 0;
}
