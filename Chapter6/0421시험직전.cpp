#include<iostream>

using namespace std;

int main(){
    int a = 100;
    int *p = &a; // 시험 오류이유?  포인터는 a의 값을 받는게아니라 주소를 받아야하니까 &a로 주소 할당을 해줘야 한다.
    cout << p ; //p의 주소 값이 출력된다. 
    cout << *p ;  //p포인터는 a의 값인 100이 출력된다.

    a = 200;
    cout << p; //p의 주소값은 이미 할당되있고 값만 바뀌는건데 주소 값이 바뀌진 않는다.
    cout << *p ; // 200이 출력됨.

    return 0;
    /*
    int a = 100;

    int b=a; //b는 a의 값을 복사한것. 즉 b는 100이 된다.

    int &
    */
}