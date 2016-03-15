#include <iostream>
#include <list>
#include <string>
using namespace std;

int main()
{
	string first_str;
	list<char> editor;
	char a;

	int num,len;
	cin >> first_str >> num;
	len = first_str.size();
	for (int i = 0; i < len; i++)
	{
		editor.push_back(first_str[i]);
	}

	list<char>::iterator cursur = editor.end();
	
	for (int i = 0; i < num; i++)
	{
		char instruct, add_str;
		cin >> instruct;

		if (instruct == 'L')
		{
			if (cursur != editor.begin())
			{
				cursur--;
			}
		}

		else if (instruct == 'D')
		{
			
			if (cursur != editor.end())
			{
				cursur++;

			}
		}
		else if (instruct == 'B')
		{
			if (cursur != editor.begin())
			{
				list<char>::iterator temp;
				temp = cursur;
				temp--;
				editor.erase(temp);
			}
		}
		else if (instruct = 'P')
		{
			cin >> add_str;
			editor.insert(cursur, add_str);
		}
	}
	 len = editor.size();
	cursur = editor.begin();
	for (int i = 0; i < len; i++)
	{
		cout << *cursur;
		cursur++;
	}
	cout << '\n';
	return 0;
}
