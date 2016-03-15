#include <iostream>
#include <deque>

using namespace std;

int main()
{
	int num=0,cnt=0;
	
	deque<int> arr;
	deque<int> brr;
	cin >> num;

	arr.push_back(num % 10);	
	arr.push_front(num / 10);
	brr.push_back(num % 10);
	brr.push_front(num / 10);

	while (true)
	{
		int nNum  = 0;
		cnt++;
		nNum = brr[0] + brr[1];

		brr[0] = brr[1];
		brr[1] = nNum%10;

		if (brr[0] == arr[0] && brr[1] == arr[1]){
			break;
		}
		
	}
	cout << cnt << endl;
	return 0;
}
