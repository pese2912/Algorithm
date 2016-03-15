#include <iostream>
#include <cstdio>
#include <set>
#include <string>

using namespace std;

int main()
{
	set<string> a;
	string str;
	cin >> str;

	for (int i = 0; i < str.size(); i++)
	{
		a.insert(str.substr(i, str.size()));	
	}

	for (auto x : a)
	{
		printf("%s\n", x.c_str());
	}
}
