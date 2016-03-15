#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

class Person{
public:
	string name;
	int kor;
	int eng;
	int mat;
};

bool cmp(const Person a, const Person b)
{
	if (a.kor > b.kor){
		return true;

	}
	else if(a.kor == b.kor){
		if (a.eng < b.eng)
		{
			return true;
		}
		else if (a.eng == b.eng)
		{
			if (a.mat > b.mat)
				return true;
			else if (a.mat == b.mat)
			{
				if (a.name < b.name)
					return true;
				else
					return false;
			}
			else
				return false;
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
	vector<Person> ps;
	int num;
	scanf("%d", &num);

	for (int i = 0; i < num; i++)
	{
		string n;
		int k, e, m;
		scanf("%s", n.c_str());
		scanf("%d %d %d", &k,&e,&m);
		ps.push_back({n.c_str(),k,e,m});
	}

	sort(ps.begin(), ps.end(), cmp);


	for (auto x : ps)
	{
		printf("%s\n",x.name.c_str());
	}

	return 0;
}
