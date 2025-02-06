#include <iostream>
#include <string>
#include <memory>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);   //C와 C++ 묶음을 해제
    cin.tie(NULL);  // cin과 cout의 묶음을 해제
    
    int num, order;
    int a, b, ball;

    cin >> num>>order;
    
    unique_ptr<int[]>ary = make_unique<int[]>(num);

    for(int i=0;i<order;i++)
    {
        cin >> a>>b>>ball;
        for (a; a <= b; a++)
        {
            ary[a-1] = ball;
        }
    }

    for (int i = 0; i < num; i++)
    {
        cout << ary[i] << " ";
    }
}