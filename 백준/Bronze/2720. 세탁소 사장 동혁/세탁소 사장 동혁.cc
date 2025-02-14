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

	int num, total, q, d, n, p;

	cin >> num;

	for (int i = 0; i < num; i++)
	{
		cin >> total;

		q = total / 25;
		total = total % 25;

		d = total / 10;
		total = total % 10;

		n = total / 5;
		total = total % 5;

		p = total;

		cout << q << " " << d << " " << n << " " << p << "\n";
	}
}