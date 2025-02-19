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

	int n, k, count=0, result;

	cin >> n >> k;

	for(int i=1;i<=n;i++)
	{
		if (n % i == 0)
		{
			count++;

			if (count == k)
			{
				result = i;
				break;
			}
		}
	}

	if (count != k)
		result = 0;

	cout << result;
}