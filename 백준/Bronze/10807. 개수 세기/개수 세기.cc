#include <iostream>
#include <string>
#include <memory>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);   //C와 C++ 묶음을 해제
    cin.tie(NULL);  // cin과 cout의 묶음을 해제
    
    int a, b, c=0;
    
    cin >> a;
    
    unique_ptr<int[]>ary = make_unique<int[]>(a);

    for(int i=0;i<a;i++)
    {
        cin >> ary[i];
    }

    cin >> b;

    for (int i = 0; i < a; i++)
    {
        if (ary[i] == b)
            c++;
    }
    cout << c;
}