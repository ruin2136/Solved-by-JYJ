#include <iostream>
#include <string>
#include <memory>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);   //C와 C++ 묶음을 해제
    cin.tie(NULL);  // cin과 cout의 묶음을 해제
    
    int a;
    int max, min;

    cin >> a;
    
    unique_ptr<int[]>ary = make_unique<int[]>(a);

    for(int i=0;i<a;i++)
    {
        cin >> ary[i];
    }

    max = ary[0];
    min = ary[0];

    for (int i = 0; i < a; i++)
    {
        if (max < ary[i])
            max = ary[i];
        if (min > ary[i])
            min = ary[i];
    }
    cout << min <<" " << max;
}