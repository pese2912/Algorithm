#include <iostream>
#include <cstdio>

using namespace std;

bool prime(int x)
{

	if (x < 2)
		return false;
	else{
		for (int i = 2; i*i <= x; i++)
		{
			if (x%i == 0)
				return false;
		}
		return true;
	}
}
int main(){

	while (true)
	{
		int n;
		scanf("%d\n", &n);

		if (n == 0)
			break;

		int flag = 0;
		int i;
		for ( i = 0; i <= n; i++)
		{
			if (prime(i))
			{
				if (prime(n - i))
				{
					flag = 1;
					break;
				}
			}
		}
		if (flag == 1)
		{
			printf("%d = %d + %d\n", n,i,n-i);
		}
		else{
			printf("Goldbach's conjecture is wrong.\n");
		}

		
	}
	
		

	return 0;
}
