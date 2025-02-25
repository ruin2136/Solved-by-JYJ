#include <iostream>			//기본입출력
#include <vector>			//vector
#include <sstream>			//istringstream
#include <unordered_set>	//unordered_set
#include <unordered_map>	//unordered_set
#include <cctype>			//tolower()
#include <algorithm>		//transform(), sort()
#include <map>				//map
#include <cmath>			//pow

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);   // C와 C++ 묶음을 해제
	cin.tie(NULL);						// cin과 cout의 묶음을 해제

	int a, b, c;
	cin >> a>>b>>c;

	if (a == 60 && b == 60 && c == 60)
		cout << "Equilateral";
	else if ((a + b + c == 180) && ((a == b) || (b == c) || (a == c)))
		cout << "Isosceles";
	else if (a + b + c == 180)
		cout << "Scalene";
	else
		cout << "Error";
}