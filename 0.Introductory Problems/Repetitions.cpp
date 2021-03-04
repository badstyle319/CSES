#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
    
	string str;
	int ans = 1;
	
	cin >> str;
	for(int L = 0, R = 1; R < str.size(); R++)
	{
		if(str[R] == str[L])
		{
			ans = max(R-L+1, ans);
		}
		else
		{
			L = R;
		}
	}
	
	cout << ans << endl;

	return 0;
}