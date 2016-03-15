#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

class Person{

public :
	int join;
	int age;
	string name;
};

bool cmp(const Person a, const Person b)
{
	if (a.age < b.age)
	{
		return true;
	}
	else if(a.age == b.age){
		return a.join < b.join;
	}
	else
	{
		return false;
	}

}

int main()
{
	int num;
	scanf("%d", &num);

	vector<Person> ps;
	for (int i = 0; i < num; i++)
	{
		int j, a;
		string n;
		scanf("%d", &a);
		scanf("%s", n.c_str());
		ps.push_back({(i+1),a,n.c_str()});
	}

	sort(ps.begin(), ps.end(), cmp);

	for (auto x : ps)
	{
		printf("%d %s\n", x.age, x.name.c_str());
	}

	return 0;
}
