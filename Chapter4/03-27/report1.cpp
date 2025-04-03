#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int choice;
    double temp;

    cout << "선택하세요 (1:화씨->섭씨, 2:섭씨->화씨) ==> ";
    cin >> choice;

    cout << fixed << setprecision(5);

    if (choice == 1) {
        cout << "화씨온도 입력: ";
        cin >> temp;
        double cd = (temp - 32) * 5.0 / 9.0;
        cout << "섭씨온도는 " << cd << " 입니다." << endl;
    }
    else if (choice == 2) {
        cout << "섭씨온도 입력: ";
        cin >> temp;
        double fd = (temp * 9.0 / 5.0) + 32;
        cout << "화씨온도는 " << fd << " 입니다." << endl;
    }
    else {
        cout << "1,2 중에 하나를 입력하세요." << endl;
    }

    return 0;
}
