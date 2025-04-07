#include <iostream>
using namespace std;

int main() {
    long long number;
    int position;

    cout << "정수 입력: ";
    cin >> number;

    cout << "자릿수 입력: ";
    cin >> position;

    long long temp = number;
    int count = 0;

    // 자릿수 세기
    while (temp > 0) {
        temp /= 10;
        count++;
    }

    if (position > count || position <= 0) {
        cout << "자릿수 범위를 벗어났습니다." << endl;
    } else {
        // 원하는 자리까지 나누기
        for (int i = 1; i < position; i++) {
            number /= 10;
        }
        int digit = number % 10;
        cout << "오른쪽에서 시작해서 " << position << "번째 자리에 있는 숫자는 " << digit << endl;
    }

    return 0;
}
