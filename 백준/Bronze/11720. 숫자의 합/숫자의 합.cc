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

	string str;
	vector<int> vec;

	int num;
	cin >> num;
	num = 0;
	cin >> str;

	for (char c: str)
	{
		num += c - '0';
	}

	cout << num;
}