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
	vector<int> ary1 = {1,1,2,2,2,8};
	vector<int> ary2;

	string str, word;
	getline(cin, str);
	istringstream ss(str);

	while (ss>>word)
	{
		ary2.push_back(stoi(word));
	}

	for (int i = 0; i < ary1.size(); i++)
	{
		cout << ary1[i]-ary2[i]<<" ";
	}
}