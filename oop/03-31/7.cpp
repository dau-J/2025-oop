#include <iostream>
using namespace std;

int main() {
    int n, sum1 = 0, sum2 = 0, sum3 = 0;
    cout << "n 입력: ";
    cin >> n;

    int i = 1;
    while (i <= n) {
        sum1 += i;             // 1 + 2 + ... + n
        sum2 += i * i;         // 제곱
        sum3 += i * i * i;     // 세제곱
        i++;
    }

    cout << "sum1의 값은 " << sum1 << endl;
    cout << "sum2의 값은 " << sum2 << endl;
    cout << "sum3의 값은 " << sum3 << endl;

    return 0;
}
