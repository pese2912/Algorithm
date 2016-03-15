#include <iostream>
#include <list>

using namespace std;

int main()
{
	int num;
    list <pair<int, int> > ps;
	cin >> num;

	//list <pair<int, int> >::iterator iterPos = ps.begin();
	for (int i = 0; i < num; i++)
	{
		int x;
		cin >> x;
		ps.push_back({i + 1, x});
	}

	int cnt = 1;
	list <pair<int, int> >::iterator iterPos = ps.begin();
	for (int i = 0; i < num-1; i++)
	{
		cnt = iterPos->second;
		cout << iterPos->first << " ";
		list <pair<int, int> >::iterator temp = iterPos;
		
		if (cnt>0)
		{
			++temp;
			if (temp == ps.end())
				temp = ps.begin();
			ps.erase(iterPos);

			iterPos = temp;

			for (int j = 1; j < cnt; j++)
			{
				iterPos++;
				if (iterPos == ps.end())
				{
					iterPos = ps.begin();
				}
				
				
			}
		}
		else if (cnt < 0)
		{
			cnt *= -1;
			if (temp == ps.begin())
			{
				temp = ps.end();
			}
			--temp;
			ps.erase(iterPos);

			iterPos = temp;
			for (int j = 1; j < (cnt); j++)
			{

				if (iterPos == ps.begin())
				{
					iterPos = ps.end();
				}
				iterPos--;
				
				
			}
		}

		
		
	}
	list <pair<int, int> >::iterator last = ps.begin();
	cout << last->first;

	return 0;
}
