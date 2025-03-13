#include <iostream>

using namespace std;

const int MAX_VALUE = 10000;  // 수의 최대값
int countAry[MAX_VALUE + 1] = { 0 };  // 카운트 배열 (0~10000까지)

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, num;
    cin >> n;

    // 입력을 받아서 카운트 배열에 저장
    for (int i = 0; i < n; i++) {
        cin >> num;
        countAry[num]++;  // 해당 숫자의 개수 증가
    }

    // 카운트 배열을 순회하며 정렬된 숫자 출력
    for (int i = 1; i <= MAX_VALUE; i++) {
        while (countAry[i] > 0) {  // 해당 숫자가 존재하는 만큼 출력
            cout << i << "\n";
            countAry[i]--;
        }
    }

    return 0;
}
