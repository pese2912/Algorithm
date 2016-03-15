#include <iostream>
#include <cstdio>

using namespace std;

int main(){

	int num;
	scanf("%d", &num);

	int cnt=1;

	while (true)
	{
		
		if (num - cnt <= 0)
			break;
		num -= cnt;
		cnt++;
	}

	int za = 1, su = cnt;
	if (cnt % 2 == 1)
	{
		printf("%d/%d\n", cnt - (num - 1),num );
	}
	else
	{
		printf("%d/%d\n", num, cnt - (num - 1));
	}




	return 0;
}
