#include <iostream>			//기본 입출력
#include <vector>			//vector
#include <sstream>			//istringstream
#include <unordered_set>	//unordered_set
#include <cctype>			//tolower()

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);   //C와 C++ 묶음을 해제
	cin.tie(NULL);  // cin과 cout의 묶음을 해제

	string str;
	int count=0, tmp;

	cin >> str;

	for (char c : str)
	{
		tmp = (int)c;

		if (tmp >= 65 && 67 >= tmp)
			count += 3;
		else if(tmp >= 68 && 70 >= tmp)
			count += 4;
		else if (tmp >= 71 && 73 >= tmp)
			count += 5;
		else if (tmp >= 74 && 76 >= tmp)
			count += 6;
		else if (tmp >= 77 && 79 >= tmp)
			count += 7;
		else if (tmp >= 80 && 83 >= tmp)
			count += 8;
		else if (tmp >= 84 && 86 >= tmp)
			count += 9;
		else if (tmp >= 87 && 90 >= tmp)
			count += 10;
	}

	cout << count;
}