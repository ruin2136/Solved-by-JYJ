#include <iostream>
#include <string>
#include <memory>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);   //C와 C++ 묶음을 해제
    cin.tie(NULL);  // cin과 cout의 묶음을 해제
    
    int a=9, order;
    int max;

    //cin >> a;
    
    unique_ptr<int[]>ary = make_unique<int[]>(a);

    for(int i=0;i<a;i++)
    {
        cin >> ary[i];
    }

    max = ary[0];
    order = 1;

    for (int i = 0; i < a; i++)
    {
        if (max < ary[i])
        {
            max = ary[i];
            order = i+1;
        }
    }
    cout << max <<"\n" << order;
}