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

	int num;
	string str="";
	cin >> num;	

	for (int i = 1; i <= num; i++)
	{
		for (int j = 0; j < num - i; j++)
			str += " ";

		for (int k = 0; k < 2*i-1; k++)
			str += "*";

		cout << str<<endl;
		str.clear();
	}

	for (int i = num-1; i >= 1; i--)
	{
		for (int j = 0; j < num - i; j++)
			str += " ";

		for (int k = 0; k < 2 * i - 1; k++)
			str += "*";

		cout << str << endl;
		str.clear();
	}

}