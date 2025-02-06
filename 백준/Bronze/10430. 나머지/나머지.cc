#include <iostream>
#include <string>

using namespace std;

int main()
{
	//543
	int a, b, c;
	cin >> a >> b >> c;

	std::cout << (a + b) % c << endl;
	std::cout << ((a % c)+(b%c)) % c << endl;
	std::cout << (a * b) % c << endl;
	std::cout << ((a%c)*(b%c))%c<< endl;
}