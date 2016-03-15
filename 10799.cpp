#include <iostream>
#include <stack>
#include <cstdio>
#include <string>
using namespace std;

int abs(int a, int b)
{
	if (a < b)
	{
		return b - a;
	}
	else
		return a - b;
}
int main()
{
	string a;
	cin >> a;

	int len = a.length();
	int cnt = 0;
	int k = 0;
	//stack<int> index;
	//stack<char> st;
	stack<int> index;
	stack<char>st;
	for (int i = 0; i < len; i++)
	{
		k = i + 1;

		if (a[i] == '(')
		{
			st.push('(');
			index.push(i + 1);
		}

		else if (a[i] == ')')
		{


			if (abs(k, index.top()) == 1){

				st.pop();
				cnt += st.size();
			}
			else{
				cnt++;
				st.pop();
			}


		}
	}
	printf("%d\n", cnt);

	return 0;
}
