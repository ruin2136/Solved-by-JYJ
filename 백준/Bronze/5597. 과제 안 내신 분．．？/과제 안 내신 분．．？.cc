#include <iostream>
#include <string>
#include <memory>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);   //C와 C++ 묶음을 해제
    cin.tie(NULL);  // cin과 cout의 묶음을 해제
    
    int num=30;
    int a, max=0,min=99;

    //cin >> num>>order;
    
    unique_ptr<int[]>ary = make_unique<int[]>(num);

    for (int i = 0; i < num; i++)
    {
        ary[i]=i+1;
    }

    for(int i=0;i<28;i++)
    {
        cin >> a;
        
        for (int i = 0; i < num; i++)
        {
            if (ary[i] == a)
            {
                ary[i] = 0;
                break;
            }
        }
    }

    for (int i = 0; i < num; i++)
    {
        if (ary[i] > max)
            max = ary[i];

        if (ary[i] < min && ary[i] != 0)
            min = ary[i];
    }
    cout << min << "\n";
    cout << max << "\n";
}