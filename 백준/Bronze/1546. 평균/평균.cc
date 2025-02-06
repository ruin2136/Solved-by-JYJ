#include <iostream>
#include <string>
#include <memory>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);   //C와 C++ 묶음을 해제
    cin.tie(NULL);  // cin과 cout의 묶음을 해제
    
    int num;
    float sum=0;
    int max=0;

    cin >> num;
    
    unique_ptr<float[]>ary = make_unique<float[]>(num);

    for (int i = 0; i < num; i++)
    {
        cin >> sum;
        if (sum > max)
            max = sum;
        ary[i]= sum;
    }

    for (int i = 0; i < num; i++)
    {
        ary[i]=ary[i] / max * (float)100;
    }

    sum = 0;

    for (int i = 0; i < num; i++)
    {
        sum += ary[i];
    }

    cout << sum / num;
}