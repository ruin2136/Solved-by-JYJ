#include <iostream>
#include <string>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);  // cin과 cout의 묶음을 해제
    
    int a, b, c;

    cin >> a;

    for (int i = 1; i <= a; i++)
    {
        cin >> b >> c;
        cout << b + c<<"\n";
    }
}