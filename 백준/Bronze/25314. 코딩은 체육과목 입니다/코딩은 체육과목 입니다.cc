#include <iostream>
#include <string>

using namespace std;

int main()
{
    //cin.tie(NULL);  // cin과 cout의 묶음을 해제
    int a;

    cin >> a;
    string tmp;
    a = a / 4;
    for (int i = 1; i <= a; i++)
    {
        tmp += "long ";
    }
    cout << tmp + "int";
}