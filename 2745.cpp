#include <iostream>
#include <cstdio>
#include <vector>
#include <cmath>
#include <string>

using namespace std;

int main(){

	string a;
	cin >> a;
	int n;
	cin >> n;

	int len = a.size();
	int c = 0;
	int sum = 0;
	for (int i = len - 1; i >= 0; i--)
	{
		if (a[i] >= 'A' && a[i] <= 'Z')
		{
			sum += (a[i] - 55)*pow(n, c);
			c++;
		}
		else{
			sum += (a[i]-48) * pow(n, c);
			c++;
		}
	}
	printf("%d\n", sum); 
	
	return 0;
}
