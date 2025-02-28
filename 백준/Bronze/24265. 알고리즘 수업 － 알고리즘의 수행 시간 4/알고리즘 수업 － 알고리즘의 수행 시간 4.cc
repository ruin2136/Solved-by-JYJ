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

	int a; 
	unsigned long n=0;
	cin >> a;

	for (int i = 0;i<a-1;i++)
	{
		for (int j = i+1; j < a; j++)
		{
			n++;
		}
	}

	cout << n <<"\n";
	cout << 2 << "\n";
}