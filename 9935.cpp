#include <iostream>
#include <cstdio>
#include <string.h>


using namespace std;

char str[1000001] = {0,};
char extp[37] = { 0, };
char stack[2000001] = { 0, };

int top = -1;

void push(char data)
{
	stack[++top] = data;
}

char pop(){

	if (top != -1){
		return stack[top--];
	}
}

int main()
{
	top = -1;
	scanf("%s", str);
	scanf("%s", extp);

	int len1 = strlen(str);
	int len2 = strlen(extp);
	
	
	for (int i = 0; i < len1; i++)
	{
		push(str[i]);
		if (stack[top] == extp[len2 - 1])
		{
			bool flag = true;
			int k = 0;
			int tmp = top-(len2-1);
			for (int j = tmp; j <= top; j++){
				if (stack[j] != extp[k])
				{
					flag = false;
				}
				k++;
			}

			if (flag == true){
				for (int j = 0; j < len2; j++)
					pop();
			}
		}
   	}
	if (top == -1)
		cout << "FRULA" << '\n';
	else{
		for (int i = 0; i <= top; i++)
			cout << stack[i];
	}
	cout << '\n';
	return 0;
}
