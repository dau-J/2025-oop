#include <iostream>
#include <string>
using namespace std;

int main() {
    string number;  // 큰 정수를 문자열로 받음
    int position;

    // 사용자 입력
    cout << "정수 입력: ";
    cin >> number;

    cout << "자릿수 입력: ";
    cin >> position;

    int length = number.length();

    // 오른쪽에서 position 번째 숫자의 인덱스 계산
    int index = length - position;

    if (index < 0) {
        cout << "자릿수 범위를 벗어났습니다." << endl;
    } else {
        cout << "오른쪽에서 시작해서 " << position << "번째 자리에 있는 숫자는 " << number[index] << endl;
    }

    return 0;
}
