#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{
	map<string,pair<string,int>> reg;

	reg["black"] = make_pair("0", 1);
	reg["brown"] = make_pair("1", 10);
	reg["red"] = make_pair("2", 100);
	reg["orange"] = make_pair("3", 1000);
	reg["yellow"] = make_pair("4", 10000);
	reg["green"] = make_pair("5", 100000);
	reg["blue"] = make_pair("6", 1000000);
	reg["violet"] = make_pair("7", 10000000);
	reg["grey"] = make_pair("8", 100000000);
	reg["white"] = make_pair("9", 1000000000);


	string color,color1,color2,color3;
	cin >> color1>>color2>>color3;

	color = reg[color1].first + reg[color2].first;
	long long n = (long long)atoi(color.c_str());

	cout << n * reg[color3].second<< endl;
	

	return 0;
}
