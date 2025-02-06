#include <iostream>
#include <string>

using namespace std;

int main()
{
    //cin.tie(NULL);  // cin과 cout의 묶음을 해제
    int a, b, c, d;

    cin >> a>>b;
    
    for (int i = 1; i <= b; i++)
    {
        cin >> c >> d;
        a = a- c * d;
    }
    if (a == 0)
        cout << "Yes";
    else
        cout << "No";
}