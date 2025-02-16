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

	int num, count=1, x=1, y=1;
	bool tmp=false;
	bool xPlus=true;

	cin >> num;

	while(num!=count)
	{
		if ((x != 1 && y != 1))
		{
			if (xPlus)
			{
				x++;
				y--;
			}
			else
			{
				x--;
				y++;
			}
		}
		else if ((x == 1 || y == 1)&&tmp)
		{
			tmp = false;

			if (xPlus)
			{
				x++;
				y--;
			}
			else
			{
				x--;
				y++;
			}
		}
		else
		{
			if (x==1)
			{
				y++;
				xPlus = true;
			}
			else
			{
				x++;
				xPlus = false;
			}

			tmp = true;
		}
				
		count++;
	}

	cout << x<<"/"<<y <<endl;
}