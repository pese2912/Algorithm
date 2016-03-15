#include <iostream>
#include <cstdio>

using namespace std;
#define MAX 1000005
char str[MAX] = { 0, };
char stack[MAX] = {0,};
char stack2[MAX] = { 0, };

int top = -1;
int cursur = -1;

void push(char data)
{
	stack[++top] = data;
	//cursur++;
}
void pop()
{
	if (top != -1){
		stack[top--] = 0;
		
	}
}
void push2()//<
{
	if (top != -1)
	{
		char data = stack[top];
		pop();
		stack2[++cursur] = data;
	}
}


void pop2()//>
{
	if (cursur != -1)
	{
		stack[++top] = stack2[cursur];
		stack2[cursur--] = 0;
	}
}

int main()
{
	int data;
	scanf("%d", &data);
	for (int test = 0; test < data; test++)
	{

		for (int i = 0; i < MAX; i++)
		{
			str[i] = 0;
			stack[i] = 0;
			stack2[i] = 0;
		
		}
		cursur = -1;
		top = -1;
		cin >> str;

		int len = 0;
		for (len = 0; str[len] != '\0'; len++){}
		
		for (int i = 0; i < len; i++)
		{
			if (str[i] == '<')
			{
				push2();
			}
			else if (str[i] == '>')
			{
				pop2();
			}
			else if (str[i] == '-')
			{
				pop();
			}
			else{
				push(str[i]);
			}
		}
		for (int i = cursur; i >=0; i--)
		{
			push(stack2[i]);
		}
		for (int i = 0; i <= top; i++)
		{
			cout << stack[i];
		}
		
		cout << '\n';
		
	}
	return 0;
}
