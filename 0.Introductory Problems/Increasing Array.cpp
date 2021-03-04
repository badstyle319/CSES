#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
    
	int n, pre, num;
	long long ans = 0;
	
	cin >> n >> pre;
	for(int i = 1; i < n; i++)
	{
		cin >> num;
		if(num < pre)
		{
			ans += pre - num;
		}
		else
		{
			pre = num;
		}
	}
		
	cout << ans << endl;

	return 0;
}