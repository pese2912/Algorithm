#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main()
{
	int num;
	cin >> num;
	
	stack<int> st;


	for (int i = 0; i < num; i++)
	{
		string str;
		cin >> str;
		if (str == "push")
		{
			int n;
			cin >> n;
			st.push(n);
		}
		else if (str == "top")
		{
			if (st.empty())
			{
				cout << "-1" << '\n';
			}
			else{
				cout<<st.top()<<'\n';
			}
		}
		else if (str == "empty")
		{
			if (st.empty())
			{
				cout << "1" << '\n';
			}
			else
				cout << "0" << '\n';
		}
		else if (str == "size")
		{
			cout << st.size() << '\n';
		}
		else if (str == "pop")
		{
			if (st.empty())
			{
				cout << "-1" << '\n';
			}
			else{
				cout << st.top() << '\n';
				st.pop();
			}

		}

	}

	return 0;
}
