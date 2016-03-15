#include <iostream>
#include <queue>

using namespace std;

int main()
{
	queue<int> que;

	int N, M;
	cin >> N >> M;
	
	for (int i = 1; i <= N; i++)
		que.push(i);

	cout << "<";
	int cnt = 0,cnt2=0;
	while (true)
	{
		if (que.empty()){
			break;
		}
		cnt++;
		if (cnt%M == 0)
		{
			cnt2++;
			if (cnt2 == 1){
				cout << que.front();
				que.pop();
			}
			else{
				cout << ", " << que.front();
				que.pop();
			}
		}
		else{
			que.push(que.front());
			que.pop();
		}
	}
	cout << ">" << '\n';

	return 0;
}
