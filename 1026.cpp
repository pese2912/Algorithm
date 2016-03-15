#include <iostream>
#include <vector>

using namespace std;

int main(){
	int num=0,n=0;
	int sum = 0;
	cin >> num;
	vector<int> A;
	vector<int> B;
	
	for (int i = 0; i < num; i++)
	{
		
		cin >> n;
		A.push_back(n);
	}

	for (int i = 0; i < num; i++)
	{
		cin >> n;
		B.push_back(n);
	}

	for (int i = 0; i < num; i++)
	{
		int max = A[0],min = B[0];
		int q=0, w=0;
		for (int j = 0; j < A.size(); j++)
		{
			if (max < A[j]){
				max = A[j];
				q = j;

			}
			
		}
		A[q] = -1;

		for (int k = 0; k < B.size(); k++)
		{
			if (min > B[k]){
				min = B[k];
				w = k;
			}
			
		}
		B[w] = 101;
		sum += max*min;
	}
	cout << sum << endl;
	return 0;
}
