#include <iostream>			//기본입출력
#include <vector>			//vector
#include <sstream>			//istringstream
#include <unordered_set>	//unordered_set
#include <unordered_map>	//unordered_set
#include <cctype>			//tolower()
#include <algorithm>		//transform()
#include <map>				//map
#include <cmath>			//pow

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);   //C와 C++ 묶음을 해제
	cin.tie(NULL);  // cin과 cout의 묶음을 해제

	double a=1, b=1;

	while (true)
	{
		cin >> a >> b;

		if (fmod(b / a, 1) == 0)
		{
			cout << "factor" << "\n";
		}
		else if (fmod(a / b, 1) == 0)
		{
			cout << "multiple" << "\n";
		}
		else if (a == 0 && b == 0)
			break;
		else
		{
			cout << "neither" << "\n";
		}
	}
}