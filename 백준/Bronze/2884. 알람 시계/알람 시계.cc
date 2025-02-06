#include <iostream>
#include <string>

using namespace std;

int main()
{
	int a, b;
	cin >> a>>b;

	if (b - 45 >= 0)
	{
		b -= 45;
	}
	else
	{
		b += 15;
		
		a--;

		if (a < 0)
			a += 24;
	}

	cout << a<<" " << b << endl;
}