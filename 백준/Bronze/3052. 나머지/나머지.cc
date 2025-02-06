#include <iostream>
#include <string>
#include <memory>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);   //C와 C++ 묶음을 해제
    cin.tie(NULL);  // cin과 cout의 묶음을 해제
    
    int num=0;
    int a;

    //cin >> num>>order;
    
    //unique_ptr<int[]>ary = make_unique<int[]>(num);
    vector<int>vec;

    for(int i=0;i<10;i++)
    {
        cin >> a;
        for (int j = 0; j < vec.size(); j++)
        {
            if (vec[j] == a % 42)
                break;
            
            if(j+1==vec.size())
                vec.push_back(a % 42);
        }

        if (vec.size() == 0)
        {
            vec.push_back(a % 42);
        }
    }

    cout << vec.size();
}