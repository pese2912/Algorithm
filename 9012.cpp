#include <iostream>
#include <stack>
#include <cstdio>
#include <string>

using namespace std;

int main()
{
	int num;
	

	scanf("%d", &num);

	for (int data = 0; data < num; data++)
	{
		stack<char> vps;
		string str;
		int flag = 1;
		cin >> str;
		int len = str.length();
		for (int i = 0; i < len; i++)
		{
			if (str[i] == '(')
			{
				vps.push(str[i]);
			}
			else if (str[i] == ')')
			{
				if (vps.empty())
				{
					flag = 0;
					break;
				}
				else
				{
					vps.pop();
				}
			}
		}

		if (flag == 1)
		{
			if (vps.empty())
				cout << "YES" << '\n';
			else
				cout << "NO" << '\n';
		}
		else
			cout << "NO" << '\n';

		
	}

	
	return 0;
}
