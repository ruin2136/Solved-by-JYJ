#include <iostream>			//기본입출력
#include <vector>			//vector
#include <sstream>			//istringstream
#include <unordered_set>	//unordered_set
#include <unordered_map>	//unordered_set
#include <cctype>			//tolower()
#include <algorithm>		//transform()
#include <map>				//map

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);   //C와 C++ 묶음을 해제
	cin.tie(NULL);  // cin과 cout의 묶음을 해제

	const int COUNT = 20;

	float score, totalscore = 0, avgscore = 0;
	string name, grade;

	unordered_map<string, float> grade_map 
		= { {"A+", 4.5}, {"A0", 4.0}, {"B+", 3.5}, {"B0", 3.0}, {"C+", 2.5}, {"C0", 2.0}, {"D+", 1.5}, {"D0", 1.0}, {"F", 0.0} };


	for (int i = 0; i < COUNT; i++)
	{
		name.clear();
		score = 0;
		grade.clear();

		cin >> name >> score >> grade;

		if (grade == "P")
			continue;

		totalscore += score;
		avgscore += score * grade_map[grade];
	}
	cout << fixed;
	cout.precision(6);
	cout << avgscore / totalscore;
}