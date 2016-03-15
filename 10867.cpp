#include <iostream>
#include <set>
using namespace std;

int main()
{
	int num;
	set<int> s;
	cin >> num;
	for (int i = 0; i < num; i++)
	{
		int x;
		cin >> x;
		s.insert(x);
	}
	int len = s.size();
	set<int>::iterator iterPos = s.begin();
	for (int i = 0; i < len; i++)
	{
		cout << *iterPos << " ";
		iterPos++;
	}
	cout << endl;
	return 0;
}
