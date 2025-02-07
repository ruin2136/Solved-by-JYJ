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

	cin >> str;

	for (int i = 0; i < 26; i++)
	{
		vec.push_back(-1);
	}

	int i = 0;
	for (char c: str)
	{
		if(vec[(int)c - 97]==-1)
			vec[(int)c - 97]= i;
		i++;
	}

	for (int i = 0; i < vec.size() ; i++)
	{
		cout << vec[i] << " ";
	}
}