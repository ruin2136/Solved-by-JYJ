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

	int a1, a0, c, n0, fn;
	cin >> a1>>a0>>c>>n0;

	for (int i = n0; i <= 100; i++)
	{
		fn = a1 * i + a0;
		i;
		c;
		n0;

		if (fn > c * i)
		{
			cout << 0;
			return 0;
		}
	}

	cout << 1 << "\n";
}