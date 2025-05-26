#include <iostream>
#include "RandomInteger.h"

using namespace std;

int main()
{
    RandomInteger r1(100, 200);
    cout << "100~200 사이의 랜덤 수: ";
    r1.print();

    RandomInteger r2(400, 600);
    cout << "400~600 사이의 랜덤 수: ";
    r2.print();

    RandomInteger r3(1500, 2000);
    cout << "1500~2000 사이의 랜덤 수: ";
    r3.print();

    // RandomInteger r4(r3); // 복사 생성자 삭제됨 -> 오류 발생
    return 0;
}