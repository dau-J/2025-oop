#include <iostream>
#include <cmath>
#include <cctype>

using namespace std;

void myswap(int &a, int &b);

int main(){
    /*
    Quiz 1) 이름을 argument로 보내면 greet()함수가 별도의 리튼값 없이 환영인사를
    출력해주는 코드작성. 이때 greet()함수의 리턴타입
    void grret(string name){
        string correctAnswer = "머머";
        if( name == correctAnswer )
            cout << "환영합니다.";
    }
    */

    /*
    Quiz 2) 아래에서 틀린부분 찾기.
     -b / 2 * a << 연산자 우선순위 (2 * a) 괄호 해줘야함.
    */
/*
    int a, b, c, pan;
    cout << "[ax\u00B2 + bx + c = 0 의 근 찾기]" << endl; // 출력용 유니콛
    cout << "계수 a,b,c를 입력하세요: ";
    cin >> a >> b >> c;
    pan = b * b - 4 * a * c; // 판별식
    if (pan < 0)
    {
        cout << "근이 없습니다." << endl;
    }
    else if (pan == 0)
    {
        cout << "두 근이 같습니다." << endl;
        cout << "x\u2081 = x\u2082 = " << -b / (2 * a) << endl;
    }
    else
    {
        cout << "서로 다른 근 2개가 있습니다." << endl;
        cout << "x\u2081 = " << (-b + sqrt(pan)) / (2 * a) << endl; // 헤더파일 cmath
        cout << "x\u2082 = " << (-b - sqrt(pan)) / (2 * a) << endl;
    }
*/
}