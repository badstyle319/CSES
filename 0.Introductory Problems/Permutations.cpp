#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
    
	int n;
	
	cin >> n;
	
	switch(n)
	{
		case 1:
			cout << "1";
			break;
		case 2:
		case 3:
			cout << "NO SOLUTION";
			break;
		default:
			for(int i = 2; i <= n; i += 2)
				cout << i << " ";
			for(int i = 1; i <= n; i += 2)
				cout << i << " ";
			break;
	}

	return 0;
}