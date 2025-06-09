#include <iostream>
using namespace std;
int main() {
    auto a = 7;
    auto b = 3.14;
    auto c = 'A';
    auto p = "abcdefg";  //cahr* 포인터는 8바이트 사용
    cout << sizeof(a) << endl; 
    cout << sizeof(b) << endl;  
    cout << sizeof(c) << endl;
    cout << sizeof(p) << endl;
    return 0;
}

//수 목 공대1호관 oop 302호 질문타임 10시부터 2시30분까지 가능 