/*Quiz #13
 do-while문을 이용해서 입력받은 양의실수를더하는프로그
램을완성하세요. (0 혹은 음수가입력되면종료)*/

#include <iostream>
using namespace std;

int main() {
    double num, sum = 0;

    do {
        cout << "양의 실수를 입력하세요 (0 또는 음수 입력 시 종료): ";
        cin >> num;
        if (num > 0) {
            sum += num;
        }
    } while (num > 0);

    cout << "입력한 양의 실수의 합: " << sum << endl;

    return 0;
}