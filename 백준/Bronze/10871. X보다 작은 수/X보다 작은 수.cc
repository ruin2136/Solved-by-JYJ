#include <iostream>
#include <string>
#include <memory>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);   //C와 C++ 묶음을 해제
    cin.tie(NULL);  // cin과 cout의 묶음을 해제
    
    int a, b;
    
    cin >> a >> b;
    
    unique_ptr<int[]>ary = make_unique<int[]>(a);
    //vector<int> vec(0);

    for(int i=0;i<a;i++)
    {
        cin >> ary[i];
    }

    for (int i = 0; i < a; i++)
    {
        if (ary[i] < b)
        {
            cout << ary[i]<<" ";
            //vec.push_back(ary[i]);
            //cout << vec[i];

        }
    }
}