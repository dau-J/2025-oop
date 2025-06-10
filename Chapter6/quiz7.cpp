/* 컴파일러한테 이런이런 사용자정의함수가 있거든 하고 알려주는 한 줄을
함수원형 혹은 함수프로토타입이라고합니다.

함수정의에서 중괄호 빼고 첫 줄과 똑같이 생겼습니다 . 세미콜론 찍어
그리고 컴파일러한테 약식정보 알려주는 역할이므로 파라미터(매개변수)명은 생략간으 즉.
long long my pow(int,int)이렇게만해도됨.
** 함수선언도 같은 말이기는 한데
어떤 교재에서는 함수선언이랑 함수정의를 혼용하는 바람에
학생들께서 혼란스럽게 생각하실 수 있으므로 그냥 함수원횽 혹은 함수프로토타입이라고 적음.*/

// 6장확인문제 다음

#include <iostream>

using namespace std;
/* //참조변수
void myswap(int &a, int &b){  // int *a, a=&x ,int *b ,b=&y
    int temp;
    temp = a;
    a = b;
    b = temp;
}

int main(){
    int x,y;
    cout << "두정수입력 : ";
    cin >> x >> y;
    cout << "x : " << x << "y : " << y << endl;

    int temp;
    temp = x;
    x = y;
    y = temp;

    myswap(&x,&y);

    cout << "x :" << x <<  "y : "<< y << endl;

    return 0;
} */

/* //포인터
void myswap(int *a, int *b){  // int *a, a=&x ,int *b ,b=&y
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int x,y;
    cout << "두정수입력 : ";
    cin >> x >> y;
    cout << "x : " << x << "y : " << y << endl;

    int temp;
    temp = x;
    x = y;
    y = temp;

    myswap(&x,&y);

    cout << "x :" << x <<  "y : "<< y << endl;

    return 0;
} */
/*
int main(){
    int x,y;
    cout << "두정수입력 : ";
    cin >> x >> y;
    cout << "x : " << x << "y : " << y << endl;

    int temp;
    temp = x;
    x = y;
    y = temp;

    swap(x,y);

    cout << "x :" << x <<  "y : "<< y << endl;

    return 0;
} */