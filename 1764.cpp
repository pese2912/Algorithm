#include <iostream>
#include <map>
#include <string>
#include <cstring>
#include <set>

using namespace std;

int main(){
	
	int n, m;
	cin >> n >> m;

	map<string, int> Nosee;
	
	for (int i = 0; i < n; i++)
	{
		string x;
		cin >> x;
		Nosee[x] = 1;
	}

	int cnt = 0;	
	set<string> v;
	for (int i = 0; i < m; i++)
	{		
		string x;
		//scanf("%s", &x);
		cin >> x;
		if (Nosee[x] == 1)
		{
			cnt++;
			v.insert(x);
			//cout << x << endl;
		}
	}
	cout << cnt << '\n';
	int len = v.size();
	set<string>::iterator iterPos = v.begin();
	for (int i = 0; i < len; i++)
	{
		cout << *iterPos << '\n';
		iterPos++;
	}
	
	return 0;
}
