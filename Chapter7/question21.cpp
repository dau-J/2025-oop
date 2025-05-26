#include <iostream>
using namespace std;
class Car {
    public:
    static string getClassName() {
        return "Car";
    }
};

int main(){
    //멤버함수에서 cout 해준다면 멤버함수 리턴타입이 void였겠지만
    //지금은 멤버함수에서 cout 안함. 단지 문자열을 리턴할뿐.
    //따라서 cout는 main 함수에서 해줘야 한다.
    Car c1;
    cout << Car::getClassName() << endl;
    // (1) 객체변수명.  non-static 은 1번만가능
    // (2) 클래스명 ::
    // (3) public 접근설정

    return 0;
}