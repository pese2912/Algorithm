#include <iostream>
#include <cstdio>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

bool comp(const string &a, const string &b)
{
	if (a.size() < b.size())
	{
		return true;
	}
	else if (a.size() == b.size()){
		if (a < b){
			return true;
		}
		else
			return false;
	}
	else
	{
		return false;
	}
}

int main()
{
	vector<string> str;
	int num;
	scanf("%d", &num);

	for (int i = 0; i < num; i++)
	{
		string a;
		cin >> a;
		str.push_back(a);
	}
	
	sort(str.begin(), str.end(), comp);
	
	for (int i = 0; i < num; i++)
	{
		if (i>0 && str[i] == str[i-1])
		{
			continue;
		}

		
			cout << str[i] << '\n';
		
	}

	return 0;
}
