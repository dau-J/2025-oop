#include <iostream>
using namespace std;
 /* 여기 제네릭함수 1개 코딩 */
 /* 
//함수오버로딩
int add(int a, int b,int c=0;) { return a + b + c; }
double sum(double a, double b, double c) { return a + b + c; } 
*/

//제네릭함수
template <typename T>
T sum(T a, T b, T c=0) { return a + b + c; } //T c=0; 이라는 걸 봤을때 T에는 숫자타입만 가능

int main() {
cout << "두 정수의 합은 " << sum(10,20) << endl;
cout << "세 실수의 합은 " << sum(1.1, 2.2, 4.4) << endl; 
    return 0;
}