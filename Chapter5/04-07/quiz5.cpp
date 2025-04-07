#include<iostream>
#include<iomanip>

using namespace std;

int main() {
    // 첫 번째: 3과 4의 배수가 아닌 수만 출력
    for (int i = 1; i <= 20; i++) {
        if (i % 3 != 0 && i % 4 != 0) {
            cout << i << ' ';
        }
    }
    cout << endl;

    for (int i = 1; i <= 20; i++) {
        if (i % 3 == 0 || i % 4 == 0) {
            continue; 
        }
        cout << i << ' ';
    }
    cout << endl;
}
