#include<iostream>
using namespace std;
int main() {
	int n, i = 1, k = 0;
	bool check = true;
	cin >> n;
	while (i <= n)
	{
		cin >> k;
		if (k == 1)
		{
			check = false;
			break;
		}
		i++;
	}
	if (check == true) cout << "No";
	else cout << "Yes";
	return 0;
}