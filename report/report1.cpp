#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
    double a,b,h;
    const double PI = 3.14159;

    cout << "실수3개를(a,b,h) 입력하세요 : " << endl;
    cin >> a;
    cin >> b;
    cin >> h;

    double result1,result2,result3;

    result1 = (a + b) * h / 2 ;
    result2 = a * a * PI;
    result3 = a * a * PI * h;

    cout << "밑변 "<< a << " 윗변 " << b << " 높이 " << h <<" 인 사다리꼴의 넓이는 " << result1 << endl;
    cout << "반지름이 " << a << " 인 원의 넓이는 " << result2 << endl;
    cout << "반지름 " << a << "높이" << h <<" 인 원기둥의 부피는 " << result3 << endl;
}