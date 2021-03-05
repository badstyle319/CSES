#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
    
	int t;
	long long y, x;
	
	cin >> t;
	while(t--)
	{
		cin >> y >> x;
		long long ring = max(y, x);
		long long shift = min(y, x);
		int ascending = 1;
		
		if(x > y && (ring & 1))
			ascending = 0;
		if(x <= y && !(ring & 1))
			ascending = 0;
		if(ascending)
			cout << (ring - 1) * (ring - 1) + shift;
		else
			cout << ring * ring - shift + 1;
		cout << endl;
	}

	return 0;
}