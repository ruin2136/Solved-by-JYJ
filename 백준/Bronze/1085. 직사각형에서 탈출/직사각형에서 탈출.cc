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
	ios_base::sync_with_stdio(false);   //C와 C++ 묶음을 해제
	cin.tie(NULL);  // cin과 cout의 묶음을 해제

	int x, y, w, h;
	int wide, height;

	cin >> x>>y>>w>>h;

	if (w - x < x)
		wide = w - x;
	else
		wide = x;

	if (h - y < y)
		height = h - y;
	else
		height = y;
	
	if (wide > height)
		cout << height;
	else
		cout << wide;
}