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

    int x1, x2, x3, y1, y2, y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

    // 같은 값을 XOR하면 0이 되고, 결국 한 번만 등장한 값만 남음
    int x4 = x1 ^ x2 ^ x3;
    int y4 = y1 ^ y2 ^ y3;

    cout << x4 << " " << y4 << "\n";

}