#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

int main()
{
	string a;	
	cin >> a;
	int len = a.length();
	int arr[26] = { -1, };
	
	fill(arr, arr + 26, -1);
	for (int i = 0; i < len; i++)
	{
		if (arr[a[i]-97] == -1)
		{
			arr[a[i] - 97] = i;
		}
		
	}
	for (int i = 0; i < 26; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");

	return 0;
}
