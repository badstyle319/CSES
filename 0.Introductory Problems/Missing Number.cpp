#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
    
	int n, ans, num;
	
	cin >> n;
	ans = n;
	for(int i = 1; i < n; i++)
		ans ^= i;
	
	for(int i = 0; i < n - 1; i++)
	{
	    cin >> num;
		ans ^= num;
	}
	
	cout << ans << endl;

	return 0;
}