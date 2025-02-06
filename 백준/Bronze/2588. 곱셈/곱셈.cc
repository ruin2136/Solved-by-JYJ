#include <iostream>
#include <string>

using namespace std;

int main()
{
	int a, b;

	cin >> a >> b;

	int tmp;

	std::cout << a*(b%10)<< endl;

	std::cout << a * ((b / 10)%10) << endl;
	std::cout << a * (b / 100) << endl;
	std::cout << a * b << endl;
}