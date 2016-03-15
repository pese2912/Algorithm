#include <iostream>
#include <string>
#include <cstdio>

using namespace std;

int main()
{
	string a, b, c, d;
	cin >> a >> b >> c >> d;
	
	a = a + b; c = c + d;
	
	cout << stoll(a) + stoll(c) << endl;

	return 0;
}
