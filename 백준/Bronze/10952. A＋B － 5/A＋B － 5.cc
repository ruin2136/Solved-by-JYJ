#include <iostream>
#include <string>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);   //C와 C++ 묶음을 해제
    cin.tie(NULL);  // cin과 cout의 묶음을 해제
    
    int a, b;

    while (cin >> a >> b)
    {
        if (a == 0 && b == 0)
            return 0;
        cout << a + b<<"\n";
    }
}