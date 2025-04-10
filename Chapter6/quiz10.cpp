#include <iostream>
using namespace std;

// 여기 한 줄 코딩: 함수 원형
double myavg(int a, int b, int c);

int main() {
    int k, e, m;     
    cout << "국영수 점수 입력: ";
    cin >> k >> e >> m;
    cout << "평균은 " << myavg(k, e, m) << " 입니다." << endl;
    return 0;
}

/* 여기 여러 줄 코딩: 함수 정의 */
double myavg(int a, int b, int c) {
    double result;
    result = (a+b+c)/3.0;
    return result;
    //return (a + b + c) / 3.0;
}
