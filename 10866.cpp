#include <iostream>
#include <deque>
#include <string>
using namespace std;



int main()
{
	deque<int> que;
	int num;
	cin >> num;
	for (int i = 0; i < num; i++)
	{
		string str;
		int n;
		cin >> str;
		
		if (str == "push_back")
		{
			cin >> n;
			que.push_back(n);
		}
		if (str == "push_front")
		{
			cin >> n;
			que.push_front(n);
		}
		if (str == "front")
		{
			if (que.empty())
			{
				cout << "-1" << '\n';
			}
			else{
				cout << que.front() << '\n';
			}
		}

		if (str == "back"){
			if (que.empty())
			{
				cout << "-1" << '\n';
			}
			else{
				cout << que.back() << '\n';
			}
		}

		if (str == "size"){
			cout << que.size() << '\n';
		}
		if (str == "empty"){
			if (que.empty())
			{
				cout << "1" << '\n';
			}
			else{
				cout <<"0" << '\n';
			}
		}

		if (str == "pop_front"){
			if (que.empty())
			{
				cout << "-1" << '\n';
			}
			else{
				cout << que.front() << '\n';
				que.pop_front();
			}
		}

		if (str == "pop_back"){
			if (que.empty())
			{
				cout << "-1" << '\n';
			}
			else{
				cout << que.back() << '\n';
				que.pop_back();
			}
		}

	}

}
