#include <iostream>

using namespace std;

int main() {
    double fd, cd;
    cout << "화씨온도 입력: ";
    cin >> fd;

    cd = 5.0 / 9 * (fd - 32);

    cout << fixed;  
    cout.precision(5);       
    cout << "섭씨온도는 " << cd << " 입니다." << endl;

    return 0;
}

