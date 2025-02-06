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
    int a, b;

    cin >> num>>order;
    
    unique_ptr<int[]>ary = make_unique<int[]>(num);

    for (int i = 0; i < num; i++)
    {
        ary[i]=i+1;
    }

    for(int i=0;i<order;i++)
    {
        cin >> a>>b;
        
        int len = b - a + 1;
        if (a == b)
            len = 0;
        a--;
        b--;
        
        for (int j=0; j < len/2; j++)
        {
            int tmp = ary[a];
            ary[a] = ary[b];
            ary[b] = tmp;

            a++;
            b--;
        }
    }

    for (int i = 0; i < num; i++)
    {
        cout << ary[i] << " ";
    }
}