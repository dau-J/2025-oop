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