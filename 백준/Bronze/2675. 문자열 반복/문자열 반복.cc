#include <iostream>
#include <string>
#include <memory>
#include <vector>
#include <sstream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);   //C와 C++ 묶음을 해제
	cin.tie(NULL);  // cin과 cout의 묶음을 해제

	int num, count;
	string str;
	vector<int> vec;

	cin >> num;
	for (int i = 0; i < num; i++)
	{
		cin >> count>>str;
		for (char c : str)
		{
			for (int j = 0; j < count; j++)
			{
				cout << c;
			}
		}
		cout << "\n";
	}
}