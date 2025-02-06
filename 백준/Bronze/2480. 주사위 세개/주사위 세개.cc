#include <iostream>
#include <string>

using namespace std;

int main()
{
	int a, b, c;
	cin >> a>>b>>c;

	if (a == b && b == c)
		cout << 10000 + (a * 1000) << endl;
	else if (a == b || b == c)
		cout << 1000 + (b * 100) << endl;
	else if (a == c)
		cout << 1000 + (a * 100) << endl;
	else
	{
		int tmp;
		if (a >= b)
			tmp = a;
		else
			tmp = b;

		if (tmp <= c)
			tmp = c;

		cout << tmp * 100 << endl;
	}
}