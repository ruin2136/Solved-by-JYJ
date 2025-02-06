#include <iostream>
#include <string>

using namespace std;

int main()
{
    //cin.tie(NULL);  // cin과 cout의 묶음을 해제
    int x;

    cin >> x;

    for (int i = 1; i < 10; i++)
    {
        cout << x<<" * "<<i<<" = "<<x*i<<endl;
    }
}