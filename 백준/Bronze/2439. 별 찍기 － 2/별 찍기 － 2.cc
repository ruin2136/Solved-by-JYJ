#include <iostream>
#include <string>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);   //C와 C++ 묶음을 해제
    cin.tie(NULL);  // cin과 cout의 묶음을 해제
    
    int a;

    cin >> a;
    string tmp="";
    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= a-i; j++)
        {
            tmp += " ";
        }
        for (int k = 1; k <= i; k++)
        {
            tmp += "*";
        }

        cout <<tmp << "\n";
        tmp = "";
    }
}