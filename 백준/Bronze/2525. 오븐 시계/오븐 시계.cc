#include <iostream>
#include <string>

using namespace std;

int main()
{
	int a, b, c;
	cin >> a>>b>>c;

	if (b + c >= 60)
	{
		a+=(b+c)/60;
		
		b=(b + c)%60;
		

	}
	else
	{
		b +=c;
	}

	if (a > 23)
		a=a % 24;

	cout << a<<" " << b << endl;
}