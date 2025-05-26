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