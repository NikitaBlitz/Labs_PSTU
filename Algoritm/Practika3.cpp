#include <iostream>
using namespace std;
int main()
{
	float a, res;
	cin >> a;
	if (a < 5)
	{
		res = a * 3;
	}
	if (a >= 5 && a <= 7)
	{
		res = a / 10;
	}
	if (a > 7)
	{
		res = a + 3;
	}
	cout << res;
	return 0;
}
