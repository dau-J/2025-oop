#include <iostream>
#include <cmath> 
using namespace std;

int main() {
    int n, sum1 = 0, sum2 = 0, sum3 = 0;
    cout << "n 입력: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        sum1 += i;             // 1 + 2 + ... + n
        sum2 += pow(i, 2);     // 1^2 + 2^2 + ... + n^2
        sum3 += pow(i, 3);     // 1^3 + 2^3 + ... + n^3
    }

    cout << "sum1의 값은 " << sum1 << endl;
    cout << "sum2의 값은 " << sum2 << endl;
    cout << "sum3의 값은 " << sum3 << endl;

    return 0;
}
