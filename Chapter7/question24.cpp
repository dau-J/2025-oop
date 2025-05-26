// RandomInteger.h

#ifndef RANDOMINTEGER_H
#define RANDOMINTEGER_H

class RandomInteger
{
private:
    int low;
    int high;
    int value;

public:
    RandomInteger(int low, int high);
    RandomInteger(const RandomInteger& random) = delete; // 복사 생성자 금지
    ~RandomInteger();
    void print() const;
};

#endif

// RandomInteger.cpp
#include "RandomInteger.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

RandomInteger::RandomInteger(int lw, int hh)
    : low(lw), high(hh)
{
    srand(time(0));  // 시드 설정 (주의: 여러 개 생성 시 시간 간격이 짧으면 동일한 값 생성 가능)
    int temp = rand();
    value = temp % (high - low + 1) + low;
}

RandomInteger::~RandomInteger()
{
    // 아무 동작 없음
}

void RandomInteger::print() const
{
    cout << value << endl;
}

//main.cpp
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
